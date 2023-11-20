int		max(int* tab, unsigned int len)
{
    if (!tab)
        return (0);
    else
        {
            int i = 0;
            int tmp = tab[i];
            while (i < len)
            {
                if (tab[i] > tmp)
                    tmp = tab[i];
                i++;
            }
            return (tmp);
        }
}
