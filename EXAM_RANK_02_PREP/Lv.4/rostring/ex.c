#include <unistd.h>

int	is_whitespace(char c)
{
		if (c == ' ' || c == '\t')
				return (1);
		return (0);
}

int	main(int argc, char **argv)
{
		if (argc > 1)
		{
				int i = 0;
				int j = 0;
				int k = 0;
				int flag = 0;

				while (is_whitespace(argv[1][i]) == 1 && argv[1][i] != '\0')
					   i++;
				k = i;
				while (is_whitespace(argv[1][i]) == 0 && argv[1][i] != '\0')
						i++;
				j = i;
				while (is_whitespace(argv[1][i]) == 1 && argv[1][i] != '\0')
						i++;
				while (argv[1][i])
				{
						while (is_whitespace(argv[1][i]) == 1 && is_whitespace(argv[1][i + 1]) == 1)
								i++;
						if (is_whitespace(argv[1][i]) == 1)
								flag = 1;
						write(1, &argv[1][i], 1);
						i++;
				}
				if (flag)
						write(1, " ", 1);
				while (k < j)
						write(1, &argv[1][k++], 1);

		}
		write(1, "\n", 1);
}
