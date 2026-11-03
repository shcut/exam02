#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
	long result = 0;
	long sign = 1;
	int i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while((str[i] >= '0' && str[i] <= '9' )
	||( str[i] >= 'a' && str[i] <= 'f' )
	|| (str[i] >= 'A' && str[i] <= 'F'))
	{
		if (result > 0)
			result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result += str[i] - 48;
		}
		else if(str[i] >= 'a' && str[i] <= 'f')
		{
			result += str[i] - 'a' + 10;
		}
		else if(str[i] >= 'A' && str[i] <= 'F')
		{
			result += str[i] - 'A' + 10;
		}
		i++;
	}
	result *= sign;
	return(result);
}

// int main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("\n%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
// 	}
// 	return(0);
// }