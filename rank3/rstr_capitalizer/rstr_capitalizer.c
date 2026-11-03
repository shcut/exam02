#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	capital(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(str[i+1] == ' ' || str[i+1] == '\0')
				str[i] -= 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			if(str[i+1] != ' ' && str[i+1] != '\0')
				str[i] += 32;
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n" , 1);
}
void	choice(int argc, char **argv)
{
	int i = 1;

	while(i < argc)
	{
		capital(argv[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		choice(argc, argv);
	}
	else
		write(1, "\n" , 1);
}
