#include <unistd.h>

int	len(char *s)
{
		int i = 0;
		while (s[i])
				i++;
		return (i);
}

int	main(int argc, char **argv)
{
		if (argc == 4 && len(argv[2]) == 1 && len(argv[3]) == 1)
		{
				int	i = 0;
				while (argv[1][i])
				{
						if (argv[1][i] != argv[2][0])
								write(1, &argv[1][i], 1);
						else
								write(1, &argv[3][0], 1);
						i++;
				}
		}
		write(1, "\n", 1);
}
