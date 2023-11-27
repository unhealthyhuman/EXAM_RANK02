#include <unistd.h>

char    convert(char to_convert)
{
    if (to_convert >= 'a' && to_convert <= 'z')
        to_convert = to_convert - 32;
    else
        to_convert = to_convert + 32;
    return (to_convert);
}

int is_space(char position)
{
    if (position == ' ' || position == '\t' || position == '\0')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int param = 1;
        while (param  < argc)
        {
            int i = 0;
            while (argv[param][i])
            {
                char buf = 0;
                if ((is_space(argv[param][i]) == 0) && is_space(argv[param][i + 1]) == 0)
                {
                    if (argv[param][i] >= 'A' && argv[param][i] <= 'Z')
                    {
                        buf = convert(argv[param][i]);
                        write(1, &buf, 1);
                    }
                    else
                        write(1, &argv[param][i], 1);
                }
                else if ((is_space(argv[param][i]) == 0) && is_space(argv[param][i + 1]) == 1)
                {
                    if (argv[param][i] >= 'a' && argv[param][i] <= 'z')
                    {
                        buf = convert(argv[param][i]);
                        write(1, &buf, 1);
                    }
                    else
                        write(1, &argv[param][i], 1);
                }
                else
                    write(1, &argv[param][i], 1);
                i++;
            }
            write(1, "\n", 1);
            param++;
        }
    }
    else
        write(1, "\n", 1);
}
