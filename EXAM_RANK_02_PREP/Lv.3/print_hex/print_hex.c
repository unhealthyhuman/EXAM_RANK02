#include <unistd.h>

void    realexpert(int num, char *base)
{
    if (num >= 16)
        realexpert(num / 16, base);
    write(1, &base[num % 16], 1);
}

int ft_atoi(const char *argv)
{
    int i = 0;
    int num = 0;
    while (argv[i] >= '0' && argv[i] <= '9')
    {
        num = (num * 10) + (argv[i] - 48);
        i++;
    }
    return (num);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        if (num >= 0)
            realexpert(num, "0123456789abcdef");
    }
    write(1, "\n", 1);
}
