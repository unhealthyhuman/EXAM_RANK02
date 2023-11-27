#include <unistd.h>

int is_space(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i = 0;
        int start = 0;
        int end = 0;
        int flag = 0;
        
        while (is_space(argv[1][i]) == 1)
            i++;
        start = i;
        while (is_space(argv[1][i]) == 0 && argv[1][i] != '\0')
            i++;
        end = i;
        while (is_space(argv[1][i]) == 1)
            i++;
        while (argv[1][i])
        {       
            while (is_space(argv[1][i]) == 1 && is_space(argv[1][i + 1]) == 1)
                i++;
            if (is_space(argv[1][i]) == 1)
                flag = 1;
            // else
            //     flag = 0;
            write(1, &argv[1][i], 1);
            i++;
        }
        if (!flag)
            write(1, " ", 1);
        while (start < end)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}
