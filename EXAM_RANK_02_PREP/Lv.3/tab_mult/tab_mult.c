#include <unistd.h>

void    putnbr(int num, char *base)
{
    if (num >= 10)
        putnbr(num / 10, base);
    write(1, &base[num % 10], 1);
}

int ft_atoi(char *s)
{
    int i = 0;
    int num = 0;
    while (s[i] >= '0' && s[i] <= '9')
    {
        num = (num * 10) + (s[i] - '0');
        i++;
    }
    return (num);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        int i = 1;
        int result = 0;
        char *base = "0123456789";
        while (i <= 9)
        {
            putnbr(i, base);
            write(1, " x ", 3);
            putnbr(num, base);
            write(1, " = ", 3);
            result = i * num;
            putnbr(result, base);
	        if (i < 9)
                write(1, "\n", 1);
	    i++;
        }
    }
    write(1, "\n", 1);
}

