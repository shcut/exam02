#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	check(char c, const char *reject)
{
	int i = 0;
	while(reject[i])
	{
		if (reject[i] == c)
			return(1);
		i++;
	}
	return(0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	while(s[i])
	{
		if(check(s[i], reject))
			return(i);
		i++;
	}
	return(i);
}

// int main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("\n%zu\n", ft_strcspn(argv[1], argv[2]));
// 	}
// 	write(1, "\n", 1);
// }