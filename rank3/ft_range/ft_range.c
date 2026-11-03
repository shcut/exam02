#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int 	*ft_range(int start, int end)
{
	int *tab;
	int i = 1;
	int tmp = start;

	if (start == 0 && end == 0)
	{
		tab = malloc(sizeof(int) *1);
		tab[0] = 0;
		return(tab);
	}
	else if (end > start)
	{
		while (tmp < end)
		{
			i++;
			tmp++;
		}
		tab = malloc(sizeof(int) * i);
		tmp = i;
		i = 0;
		while(i < tmp)
		{
			tab[i] = start;
			start++;
			i++;
		}
	}
	else if( end < start)
	{
		while (tmp > end)
		{
			i++;
			tmp--;
		}
		tab = malloc(sizeof(int) * i);
		tmp = i;
		i = 0;
		while(i < tmp)
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
	return(tab);
}

// int main(int argc, char **argv)
// {
// 	int *tab;
// 	int i = 0;
// 	if (argc == 3)
// 	{
// 		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
// 		while(i < 5)
// 		{
// 			printf("\n%d\n", tab[i]);
// 			i++;
// 		}
// 	}
// 	return(0);
// }