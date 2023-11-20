#include <unistd.h>

int	main(int argc, char **argv)
{
		if (argc == 2)
		{
				int	i = 0;
				
				while (argv[1][i])
				{
						if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
						{
							int	lil = argv[1][i] - 'a';
							while (lil >= 0)
							{
									write(1, &argv[1][i], 1);
									lil--;
							}
						}
						else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
						{
								int big = argv[1][i] - 'A';
								 while (big >= 0)
                            {
                                    write(1, &argv[1][i], 1);
                                    big--;
                            }
						}
						else
								write(1, &argv[1][i], 1);
						i++;
				}
		}
		write(1, "\n", 1);
}

// or

/*#include <unistd.h>

void    ft_putchar_n(char c, int i)
{
    while (i > 0)
    {
        write(1, &c, 1);
        --i;
    }
}

void    repeat_alpha(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
            ft_putchar_n(*str, *str + 1 - 'a');
        else if (*str >= 'A' && *str <= 'Z')
            ft_putchar_n(*str, *str + 1 - 'A');
        else
            write(1, str, 1);
        ++str;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);

    write(1, "\n", 1);
    return (0);
}*/
