#include <unistd.h>

int	len(char *str)
{
		int	i = 0;
		while (str[i])
				i++;
		return (i);
}

int	main(int argc, char **argv)
{
		if (argc == 4)
		{
			if (len(argv[2]) == 1 && len(argv[3]) == 1)
			{
				int	i = 0;
				while (argv[1][i])
				{
					if (argv[1][i] == argv[2][0])
						write(1, &argv[3][0], 1);
					else
						write(1, &argv[1][i], 1);
					i++;
				}
			}
	}
	write(1, "\n", 1);
}

// or

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 4 && !argv[2][1] & !argv[3][1])
    {
        while (argv[1][i]!='\0')
        {
            if (argv[1][i]==argv[2][0])
            {
                argv[1][i] = argv[3][0];
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}
