#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	while(str[i])
	{
		res += str[i] - 48;
		if (str[i+1])
			res *= 10;
		i++;
	}
	return(res);
}

void putnbr(int nbr)
{
	int result;
	if (nbr > 9)
	{
		putnbr(nbr / 10);
	}
	result = nbr % 10 + 48;
	write(1, &result, 1);
}

int isprime(int nbr)
{
	int i = 2;
	if (nbr < 2)
		return(0);
	while(i < nbr)
	{
		if(nbr % i == 0)
			return (0);
		i++;
	}
	return(1);
}
int addprime(int nbr)
{
	int result = 0;
	int i = 0;
	while(i < nbr)
	{
		if (isprime(i))
		{
			result += i;
		}
		i++;
	}
	if (isprime(nbr))
		result += nbr;
	return(result);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (argv[1][0] == '-')
			write(1, "0", 1);
		else
		{
			putnbr(addprime(ft_atoi(argv[1])));
		}
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return(0);
}