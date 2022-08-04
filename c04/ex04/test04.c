#include <stdio.h>
#include <stdlib.h>
#include "ft_putnbr_base.c"

int main(void)
{
	int y[10] = {0, -15, 2147483647, -2147483648, 3, 42, -985, -1, -42, -99999};
	char bases[10][20] = {"0123456789", "01", "0123456789abcdef", "shinobu", "01234567", "epico", "01231", "1", "", "123-65"};
	
	for(int i=0; i<10; i++){
		printf(" | Input: %d", y[i]);
		ft_putnbr_base(y[i], bases[i]);
		printf("\n");
	}

	return 0;
}
