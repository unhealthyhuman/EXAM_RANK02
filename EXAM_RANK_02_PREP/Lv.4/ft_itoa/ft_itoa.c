#include <stdlib.h>

char    re(int num, char *base)
{
    /*if (num >= 10)
        re(num / 10, base);*/
    return (base[num % 10]);
}

char    *ft_itoa(int nbr)
{
    int len = 0;
    int min = 0;
    int nbr_cpy = nbr;
    if (nbr < 0)
    {
        min = 1;
        len++;
        nbr = nbr * (-1);
        nbr_cpy = nbr;
    }
    if (nbr == 0)
        len = 1;
    while (nbr > 0)
    {
        len++;
        nbr = nbr / 10;
    }
    char    *result = (char *)malloc(sizeof(char) * (len + 1));
    if (result == NULL)
        return (NULL);
    result[len + 1] = '\0';
    if (min == 1)
        {
            result[0] = '-';
            while (--len > 0)
            {
                result[len] = re(nbr_cpy, "0123456789");
                nbr_cpy = nbr_cpy / 10;
            }
        }
    else if (min == 0)
    {
        while (--len >= 0)
        {
            result[len] = re(nbr_cpy, "0123456789");
            nbr_cpy = nbr_cpy / 10;
        }
    }
    return (result);
}

#include <stdio.h>
int main()
{
    int i = 69;
    char *a = ft_itoa(i);
    printf("%s\n", a);
}
