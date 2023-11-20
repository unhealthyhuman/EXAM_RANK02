#include "do_op.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
		{
			if (argv[2][0] == '*')
			{
				int	x = 0;
				x = atoi(argv[1]) * atoi(argv[3]);
				printf("%d\n", x);
			}
			else if (argv[2][0] == '/')
			{
				int d = 0;
				d = atoi(argv[1]) / atoi(argv[3]);
				printf("%d\n", d);
			}
			else if (argv[2][0] == '+')
			{
				int	a = 0;
				a = atoi(argv[1]) + atoi(argv[3]);
				printf("%d\n", a);
			}
			else if (argv[2][0])
			{
				int	m = 0;
				m = atoi(argv[1]) - atoi(argv[3]);
				printf("%d\n", m);
			}
			else if (argv[2][0])
			{
				int	mo = 0;
				mo = atoi(argv[1]) % atoi(argv[3]);
				printf("%d\n", mo);
			}
		}
	else
			write(1, "\n", 1);
}
