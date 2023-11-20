#include <stdio.h>
#include <stdlib.h>


int is_prime_number(int number)
{
    int divider = 2; 
    if(number == 2)
        return (1);
    while(divider < number)
    {
        if(number % divider == 0)
            return (0);
        divider++;
    }
    return (1);
}

int get_next_prime_num(int factor)
{
    int new_factor = factor + 1;
    int i = 2;

    while(1)
    {
        if(is_prime_number(new_factor) == 1)
            break;
        new_factor = new_factor + 1;
    }
    return (new_factor);

}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int tmp = atoi(argv[1]);
        if (tmp == 1)
            printf("%d", tmp);
        int factor = 2;
        while (tmp >= 2)
        {
            if ((tmp % factor) == 0)
            {
                printf("%d", factor);
                if ((tmp / factor) == 1)
                    break;
                else
                    printf("*");
                tmp = tmp / factor;
            }
            else
                factor = get_next_prime_num(factor);
        }
    }
    printf("\n");
}
