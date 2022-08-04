#include <stdio.h>
#include "ft_rev_int_tab.c"

int main(void)
{
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};
	int i=0;
	int size = 10;

	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		if(tab[i] != size-i-1){
			printf("Errato\n");
			return 0;
		}
		i++;
	}
	printf("Corretto\n");
	return 0;
}
