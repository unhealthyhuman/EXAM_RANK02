#include <unistd.h>

int	main(int argc, char **argv)
{
		if (argc == 2)
		{
				int	i = 0;

				while (argv[1][i])
				{
					if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					{
						int	temp = 0;
						temp = argv[1][i] + 13;
						while (temp > 'Z')
								temp = temp - 26;
						write(1, &temp, 1);
					}
					else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
					{
						int tmp = 0;
                        tmp = argv[1][i] + 13;
						while (tmp > 'z')
                                tmp = tmp - 26;
                        write(1, &tmp, 1);
					}
					else
							write(1, &argv[1][i], 1);
					i++;
				}
		}
		write(1, "\n", 1);
}

// or

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
