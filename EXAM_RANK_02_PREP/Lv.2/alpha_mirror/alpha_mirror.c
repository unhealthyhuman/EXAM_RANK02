#include <unistd.h>

char	*alpha_mirror(char *s)
{
		int i = 0;
		char	*tmp;
		while (s[i])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				tmp = s[i] + 25;
				write(1, &s[i], 1);
			}
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				tmp = s[i] + 25;
				write(1, &s[i], 1);
			}
			else
				write(1, &s[i], 1);
			i++;
		}
}

int	main(int argc, char **argv)
{
		if (argc == 2)
			alpha_mirror(argv[1]);
		write(1, "\n", 1);
}
