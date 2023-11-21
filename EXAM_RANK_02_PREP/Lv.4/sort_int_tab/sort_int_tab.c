void sort_int_tab(int *tab, unsigned int size)
{
		int	i = 0;
		int	tmp = 0;
		while (i < (size - 1))
		{
				if (tab[i] > tab[i + 1])
				{
						tmp = tab[i];
						tab[i] = tab[i + 1];
						tab[i + 1] = tmp;
						i = 0;
				}
				else
						i++;
		}
}

/*#include <stdio.h>
int main()
{
    int i = 0;
    int tab[6] = {0, 99, 33, 21, -8, 0};
    sort_int_tab(tab, 6);
    while (i < 6)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}*/
