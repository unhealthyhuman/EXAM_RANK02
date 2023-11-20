int	ft_strlen(char *s)
{
		int	i = 0;

		while (*s)
		{
				i++;
				s++;
		}
		return (i);
}

char    *ft_strcpy(char *s1, char *s2)
{
		int	i = 0;
		int variable = ft_strlen(s2) + 1;
		int filip = ft_strlen(s1);
		while ( (--variable) > 0)
		{
				s1[filip++] = s2[i];
				i++; 
		}
		s1[filip + 1] = '\0';
		return (s1);
}

//or upper function is basically strcat and yet it is also accepted for strcpy
//bc it copies without overlapping, which is the correct behaviour of strcpy

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "Vale";
	char	dest[100] = "Hola";

	//strlcpy(dest + 4, src, 4);
	//printf("OG strlcpy: %s\n%zu\n\n", dest, \
	//(dest, "aasdjj;s;sa", 100));

	char	src2[] = "Vale";
	char	dest2[100] = "Hola";

	//ft_strlcpy(dest2, src2, 9);
	 printf("My strcpy: %s\n%s\n\n", dest2, \
	 ft_strcpy(dest2, "julian"));
}
*/
