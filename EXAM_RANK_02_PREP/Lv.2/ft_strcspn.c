/*size_t ft_strlen(char *s, int end)
{
	size_t i = 0;
	while (i <= end)
		i++;
	return (i);
}*/
#include <stddef.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;
	
	
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char *s = "mepica el hoyoo jaja";
	char *accept = "üüstttdd 234 hej";
	int c1 = ft_strcspn(s, accept);
	int c2 = strcspn(s, accept);
	
	printf("MINE: %d\n", c1);
	printf("OG: %d\n", c2);
}
