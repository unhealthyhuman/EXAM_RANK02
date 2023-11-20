#include <stdlib.h>
#include <stdio.h>

/*int	ft_atoi(char *s)
{
		int	minus = 0;
		int	num = 0;
		int	i = 0;
		while (*s)
		{
				if (*s == '-')
				{
					minus++;
					s++;
				}
				if (*s >= '0' && *s <= '9')
				{
						num = (num * 10) + (*s - 48);
						s++;
				}
				if (minus > 0)
						num = num * (-1);
		}
		return (num);
}*/

int	main(int argc, char **argv)
{
		int max_divider = 1; 
		if (argc == 3)
		{
				int i = 1;
				while (i <= atoi(argv[1]))
				{
						if (((atoi(argv[1]) % i) == 0) && ((atoi(argv[2]) % i) == 0))
							max_divider = i;
						i++;
				}
				printf("%d", max_divider);
		}
		printf("\n");
		return (0);
}
