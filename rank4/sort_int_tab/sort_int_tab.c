#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int tmp = tab[i];
	while(i < size)
	{
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
		j = i ;
	}
}

// int main()
// {
// 	int tab[] = {4, 3, 5, 2, 8};
// 	sort_int_tab(tab, 5);
// 	int i = 0;
// 	printf("\n 0 = %d\n", tab[0]);
// 	while (i < 5)
// 	{
// 		printf("\n%d\n", tab[i]);
// 		i++;
// 	}
// }