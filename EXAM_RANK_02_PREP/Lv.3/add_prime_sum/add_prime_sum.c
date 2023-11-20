#include <unistd.h>

int ft_atoi(char *s)
{
    int i = 0;
    int tmp = 0;
    while (s[i] >= '0' && s[i] <= '9')
    {
        tmp = (tmp * 10) + (s[i] - '0');
        i++;
    }
    return (tmp);
}

void    putnbr(int num, char *base)
{
    if (num >= 10)
        putnbr(num / 10, base);
    write(1, &base[num % 10], 1);
}

int is_prime(int num)
{
    int divider = 2;
    while (divider < num)
    {
        if(num % divider == 0)
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
        int num = ft_atoi(argv[1]);
        int sum;
        while(i <= num)
        {
            if(is_prime(i) == 1)
                sum+=i;
            i++;
        }
        putnbr(sum, "0123456789");
    }
    write(1, "\n", 1);
}
