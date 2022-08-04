#include <stdio.h>
#include "ft_sort_int_tab.c"

int main(void)
{
	int sort[10] = {1,8,5,7,3,6,4,9,0,2};
	int i = 0;

	ft_sort_int_tab(sort, 10);
	
	while(i < 10)
	{
		if(sort[i] != i){
			i = 0;
			break;
		}
		i++;
	}
	if(i){
		printf("Corretto\n");
		return 0;
	}
	printf("Errato\n");
	return 0;
}
