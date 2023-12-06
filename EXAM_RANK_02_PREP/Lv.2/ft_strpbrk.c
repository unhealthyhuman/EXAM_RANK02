char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j = 0;
	
	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *)s1;
			i++;
		}
		s1++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int	main()
{
	char *s = "mepica el hoyoo jaja";
	char *accept = "üüstttdd 234 hej";
	char *c1 = ft_strpbrk(s, accept);
	char *c2 = strpbrk(s, accept);
	
	printf("MINE: %s\n", c1);
	printf("OG: %s\n", c2);
}
