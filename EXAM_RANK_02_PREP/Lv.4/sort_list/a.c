#include <stdlib.h>
#include <unistd.h>

int count_words(char *s)
{
    int i = 0;
    int count = 0;
    while (s[i])
    {
        if (s[i] == ' ' || s[i] == '\t')
            count++;
        i++;
    }
    return (count + 1);
}

#include <stdio.h>
void jiji(char *s)
{
    if (argc == 2)
    {
        int len;
        char **to_print;
        int i = 0;
        int e = 0;
        int count = 0;
        char    *buf;

        len = count_words(argv[1]);
        to_print = malloc(sizeof(char) * (len));
        if (to_print == NULL)
            return (0);
        while (argv[1][i])
        {
            while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
            {
                buf[count] = argv[1][i];
                count++;
                i++;
            }
            buf[count] = '\0';
            to_print[e++] = buf;
            i++;
        }
        int a = 0;
        int b = 0;
        while (a < len)
        {
            while (argv[a][b])
            {
                write(1, &to_print[a][b], 1);
                b++;
            }
            a++;
        }
    }
    write(1, "\n", 1);
}

int main()
{
    char *s = "Wingardium Leviosa";
    jiji(s);
}