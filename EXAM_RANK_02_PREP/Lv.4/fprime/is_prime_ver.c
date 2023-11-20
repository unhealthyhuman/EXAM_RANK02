#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)
{
    int divider = 2;
    while (divider < num)
    {
        if ((num % divider) == 0)
            return (0);
        divider++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    if (argc == 2 && argv[1][0] != '-')
    {
        int i = 2;
        int num = atoi(argv[1]);
        while(i <= num)
        {
            if (is_prime(i) == 1)
            {
                if ((num % i) == 0)
                {
                    printf("%d", i);
                    if (i == num)
                        break;
                    num = num / i;
                    printf("*");
                }
                else
                    i++;
            }
            else
                i++;

        }
    }
    printf("\n");
}
