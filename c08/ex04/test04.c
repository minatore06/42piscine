#include "ft_strs_to_tab.c"
#include "../ex05/ft_show_tab.c"

int main(int argc, char *argv[])
{
	if(argc > 1)
		ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}
