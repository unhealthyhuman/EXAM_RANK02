#include <unistd.h>

int	inter(char *s, char c, int len)
{
	int i = 0;
	while (s[i] && (i < len || len == -1))
	{
		if (s[i++] == c)
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		while (argv[1][i])
		{
			if(!inter(argv[1], argv[1][i], i) && inter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;	
		}		
	}
	write(1, "\n", 1);
}
