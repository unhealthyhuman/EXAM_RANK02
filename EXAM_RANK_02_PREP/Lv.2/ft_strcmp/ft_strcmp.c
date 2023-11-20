int    ft_strcmp(char *s1, char *s2)
{
		unsigned char	*str1 = (unsigned char*)s1;
		unsigned char	*str2 = (unsigned char*)s2;
		int	i = 0;

		while (str1[i] && str2[i])
		{
				if (str1[i] == str2[i])
						i++;
				else
						return (str1[i] - str2[i]);
		}
		if (!(str2[i]))
				return (str1[i]);
		if (!(str1[i]))
				return (str2[i] * (-1));
		return (str1 - str2);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char	*ar1 = "";
	char	*ar2 = "hello World";
	
	int	n = 2;

	printf("%d\n", strcmp(ar1, ar2));
	printf("%d\n", ft_strcmp(ar1, ar2));

	//if (ft_strncmp(ar1, ar2, 5) == strncmp(ar1, ar2, 5))
	//	printf("nice");
}*/
