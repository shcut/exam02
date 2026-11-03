#include <stdio.h>
#include <stdlib.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%u\n", swap_bits((unsigned char)atoi(argv[1])));
// 	return (0);
// }