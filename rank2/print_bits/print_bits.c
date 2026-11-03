#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_bits(unsigned	char	octet)
{
	unsigned int i = 8;
	unsigned char res = 0;
	while(i--)
	{
		res = ((octet >> i) & 1) + '0';
		write(1, &res, 1);
	}
}

// int main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		print_bits(argv[1][0]);
// 	}
// 	write(1, "\n", 1);
// 	return(0);
// }