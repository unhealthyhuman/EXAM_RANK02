#include <unistd.h>

int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	printer(char *s, int start, int end)
{
	while (start < end)
		write(1, &s[start++], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int right = 0;
		int left;
		
		while (argv[1][right])
			right++;
		left = right;
		while (--left >= 0)
		{
			while (is_whitespace(argv[1][left]) == 0 && left > -1)
				left--;
			printer(argv[1], left + 1, right);
			right = left;
			if (is_whitespace(argv[1][left]) == 1 && left != 0)
				write(1, " ", 1); 
		}
	}
	write(1, "\n", 1);
}
