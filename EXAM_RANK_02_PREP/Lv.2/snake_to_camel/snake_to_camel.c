#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] != '_' && argv[1][i - 1] != '_')
                write(1, &argv[1][i], 1);
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                argv[1][i] = argv[1][i] - 32;
                write(1, &argv[1][i], 1);
            }
            i++;
        }

    }
    write(1, "\n", 1);
}
