#include <unistd.h>

void    realexpert(int num, char *base)
{
    if (num >= 10)
        realexpert(num / 10, base);
    write(1, &base[num % 10], 1);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        write(1, "0", 1);
    else
        realexpert(argc - 1, "0123456789");
    write(1, "\n", 1);
}
