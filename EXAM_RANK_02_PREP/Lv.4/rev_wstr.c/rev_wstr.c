#include <unistd.h>
#include <stdio.h>
int is_whitespace(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

void print_word(char *str, int left, int right)
{
    while (str[left] && left < right)
        //printf("cur_char: %c\n", str[left++]);
        write(1, &str[left++], 1);
}

void print_reverse(char *str)
{
    int left = 0;
    int right = 0;
    
    while (str[right])
        right++;
    left = right;

    while (left >= 0)
    {
        while (left >= 0 && !is_whitespace(str[left]))
            left--;
        print_word(str, left + 1, right);
        while (left >= 0 && is_whitespace(str[left]))
            left--;
        right = left + 1;
        if (left > 0)
            write(1, " ", 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        print_reverse(argv[1]);
    }
    write(1, "\n", 1);
}
