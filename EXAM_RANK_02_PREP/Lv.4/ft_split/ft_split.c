#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, int len)
{
	int	i = -1;
	
	while (++i < len && src[i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	i = 0;
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	while (str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}

/*int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*put_word(char *s, int start, int end)
{
	char *buf;
	int i = 0;
	
	buf = malloc(sizeof(char) * ((end - start) + 1));
	while (start < end)
		buf[i++] = s[start++];
	buf[i] = '\0';
	return (buf);
}

char    **ft_split(char *str)
{
	int i = 0;
	int len = 0;
	int right = 0;
	int left = 0;
	
	while (str[right])
	{
		if (is_whitespace(str[right]) == 0 && (is_whitespace(str[right + 1]) == 1 || str[right + 1] == '\0'))
			len++;
		right++;
	}
	left = right;
	char **result;
	result = malloc(sizeof(char *) * (len + 1));
	if (result == NULL)
		return (NULL);
	//result[len + 1] = NULL;
	left--;
	while (len > 0)
	{
		while (is_whitespace(str[left]) == 1 && left > -1)
		{
			left--;
			right = left + 1;
		}
		while (is_whitespace(str[left] == 0 && left > -1))
			 left--;
		printf("just before put word\n");
		result[len] = put_word(str, left + 1, right);
		len--;
	}
	return (result);	
}*/

/*#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}*/

int main()
{
	char *s = "hola chicos  del youtuve";
	char **s_arr;
	s_arr = ft_split(s);
	int i = 0;
	while(s_arr[i] != NULL)
	{
		//printf("cao cao zdravo");
		printf("%s\n", s_arr[i]);
		i++;
	}
	
}
