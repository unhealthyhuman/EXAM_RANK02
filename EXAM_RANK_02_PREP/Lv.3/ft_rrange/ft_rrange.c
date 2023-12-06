#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*result;
	int	total = abs((end - start) + 1);
	int	i = 0;
	
	result = malloc(sizeof(int) * total);
	while (i <= total)
	{
		if (start > end)
		{
			result[i] = end;
			end++;
		}
		else
		{
			result[i] = end;
			end--;
		}
		i++;
	}
	i = 0;
	return (result);
}

#include <stdio.h>
int main()
{
    int *arr = ft_rrange(0, -3);
    int i = 0;
    while (i < 4)
        printf("%d\n", arr[i++]);
}
