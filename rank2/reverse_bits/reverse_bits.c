#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char	octet)
{
	unsigned char	set = 0;
	int 			i = 8;

	while (i--)
	{
		set = (set << 1) | (octet & 1);
		octet >>=1;
	}
	return(set);
}

// int main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("\n%d\n", reverse_bits(argv[1][0]));
// 	}
// 	write(1, "\n", 1);
// 	return(0);
// }