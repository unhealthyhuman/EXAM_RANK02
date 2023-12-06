void sort_int_tab(int *tab, unsigned int size)
{
		int i = 0;
		int tmp = tab[i];

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
#include <stdio.h>
int main()
{
		int tab[5] = {99, 32, 0, 2, -45};
		sort_int_tab(tab, 5);
		int i = 0;

		while (i < 5)
		{
				printf("%d\n", tab[i]);
				i++;
		}
}
