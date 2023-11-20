int	ft_atoi(const char *str)
{
	int	result = 0;
	int	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
			str++;
	if (*str == '-')
			sign = -1;
	while (*str == '+' || *str == '-')
			str++;
	while (*str >= '0' && *str <= '9')
	{
			result = result * 10 + *str - '0';
			str++;
	}
	return (sign * result);
}

#include <stdio.h>
int	main(void)
{
	//char	array[] = "         ---+--+768903ab567";
	//ft_atoi("");
	printf("%d", (ft_atoi("      	--+54321")));
	return (0);
}
