#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	check2(char c, char *check)
{
	static int i = 0;

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

int checkstr(char *check, char *argv)
{
	int i = 0;
	while(argv[i])
	{
		if (check[i] != argv[i])
			return(1);
		i++;
	}
	return(0);
}

void	wd_match(char **argv)
{
	char check[300] = {0};
	int i = 0, k = 0;

	while(argv[1][i])
	{
		if (check2(argv[1][i], argv[2]))
		{
			check[k] = argv[1][i];
			k++;
		}
		i++;
	}
	if(!checkstr(check, argv[1]))
		putstr(check);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		wd_match(argv);
	}
	write(1, "\n", 1);
}