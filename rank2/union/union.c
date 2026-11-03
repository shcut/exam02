#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	check2(char c, char *check)
{
	int i = 0;

	while(check[i])
	{
		if(c == check[i])
			return(1);
		i++;
	}
	return(0);
}

void	putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_union(char **argv)
{
	char check[300] = {0};
	int i = 0, k = 0;

	while(argv[1][i])
	{
		if(!check2(argv[1][i], check))
		{
			check[k] = argv[1][i];
			k++;
		}
		i++;
	}
	i = 0;
	while(argv[2][i])
	{
		if(!check2(argv[2][i], check))
		{
			check[k] = argv[2][i];
			k++;
		}
		i++;
	}
	putstr(check);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv);
	}
	write(1, "\n", 1);
}
