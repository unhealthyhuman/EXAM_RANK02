unsigned char	reverse_bits(unsigned char octet)
{
		return (octet << 4 | octet >> 4);
}

#include <stdio.h>
int main()
{
		printf("%c\n", reverse_bits(6));
}
