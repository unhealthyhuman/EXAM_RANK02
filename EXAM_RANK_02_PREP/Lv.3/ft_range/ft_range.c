#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int total = (abs(end - start) + 1);
    int i = 0;
    int *range;
    
    range = malloc(sizeof(int) * total);
    if (range == NULL)
        return (NULL);
    while (i < total)
    {
        if (start > end)
        {
            range[i++] = start;
            start--;
        }
        else
        {
            range[i++] = start;
            start++;
        }
    }
    return (range);
}

/*#include <stdio.h>
int main()
{
    int *arr = ft_range(1, 3);
    int i = 0;
    while (i < 3)
        printf("%d\n", arr[i++]);
} */
