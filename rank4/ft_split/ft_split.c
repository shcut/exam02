#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char **count(char *str)
{
	char **nwstr;
	int i = 0;
	int count = 0;
	while(str[i])
	{
		while (str[i] == ' '|| str[i] == '\t'|| str[i] == '\n')
			i++;
		if(str[i])
		{
			i++;
			count++;
		}
		while (str[i] != ' ' && str[i] != '\t'&& str[i] != '\n' && str[i])
			i++;
	}
	nwstr = malloc(sizeof(char *) * count + 1);
	if (!nwstr)
		return(NULL);
	nwstr[count] = NULL;
	return(nwstr);
}

char **countw(char **nwstr, char *str)
{
	int i = 0, k = 0;
	int count = 0;
	int cword = 0;
	while(str[i])
	{

		while (str[i] == ' '|| str[i] == '\t'|| str[i] == '\n')
			i++;
		if(str[i])
		{
			i++;
			cword++;
			count++;
		}
		while (str[i] != ' ' && str[i] != '\t'&& str[i] != '\n' && str[i])
		{
			i++;
			cword++;
		}
		if(k < count)
		{
			nwstr[k] = malloc(cword + 1);
			if(!nwstr[k])
				return(NULL);
			k++;
			cword = 0;
		}
	}
	return(nwstr);
}

char **writew(char **nwstr, char *str)
{
	int i = 0, k = 0;
	int count = 0;
	int cword = 0;
	while(str[i])
	{

		while (str[i] == ' '|| str[i] == '\t'|| str[i] == '\n')
			i++;
		if(str[i])
		{
			nwstr[k][cword] = str[i];
			i++;
			cword++;
			count++;
		}
		while (str[i] != ' ' && str[i] != '\t'&& str[i] != '\n' && str[i])
		{
			nwstr[k][cword] = str[i];
			i++;
			cword++;
		}
		if(k < count)
		{
			nwstr[k][cword] =  '\0';
			k++;
			cword = 0;
		}
	}
	return(nwstr);
}

char	**ft_split(char *argv)
{
	char **str;
	str = count(argv);
	countw(str, argv);
	writew(str, argv);
	return(str);
}

// int main(int argc, char **argv)
// {
// 	char **str;
// 	if (argc == 2)
// 	{
// 		str = ft_split(argv[1]);
// 		printf("\n%s\n", str[0]);
// 	}

// }