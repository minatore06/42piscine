#include <stdio.h>
#include "ft_ultimate_ft.c"

int main(void)
{
	int x = 10;
	int *z = &x;
	int **a = &z;
	int ***s = &a;
	int ****d = &s;
	int *****f = &d;
	int ******g = &f;
	int *******h = &g;
	int ********j = &h;
	ft_ultimate_ft(&j);
	x==42?printf("Corretto"):printf("errato");
	return 0;
}
