#include <unistd.h>

int	is_whitespace(char c)
{
		if (c == ' ' || c == '\t')
				return (1);
		return (0);
}

void	write_str(char *str, int start, int end)
{
		while (start < end)
				write(1, &str[start++], 1);
}

int	main(int argc, char **argv)
{
		if (argc == 2)
		{
				int right = 0;
				int left = 0;

				while (argv[1][right])
						right++;
				left = right;
				while (left >= 0)
				{
					if (is_whitespace(argv[1][left]) == 1)
					{		
							left--;
							write(1, " ", 1);
					}
					while (is_whitespace(argv[1][left]) != 1 && left > -1)
						   left--;
					write_str(argv[1], left + 1, right);
					right = left;
				}
		}
		write(1, "\n", 1);
}
