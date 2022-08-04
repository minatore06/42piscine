
#include "ft_point.h"

void	set_point(struct s_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	struct	s_point	point;

	set_point(&point);
	return (0);
}
