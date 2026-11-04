#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long nbr2 = nbr;
	long tmp;
	char *str;
	int sign = 1;
	int i = 1;
	if (nbr == 0)
	{
		str = malloc(2);
		str[0] = '0';
		str[1] = '\0';
		return(str);
	}
	if(nbr2 < 0)
	{
		i++;
		sign = -1;
		nbr2 *= -1;
	}
	tmp = nbr2;
	while (nbr2 > 0)
	{
		i++;
		nbr2/= 10;
	}
	str = malloc(sizeof(char) * i);
	i--;
	str[i] = '\0';
	i--;
	nbr2 = tmp;
	while(nbr2 > 0)
	{
		str[i] = nbr2 % 10 + '0';
		nbr2 /= 10;
		i--;
	}
	if (sign == -1)
		str[i] = '-';
	return(str);
}

// int main (int argc, char **argv)
// {
// 	if(argc == 2)
// 	{
// 		printf("\n%s\n",ft_itoa(atoi(argv[1])));
// 	}
// 	write(1, "\n", 1);
// }