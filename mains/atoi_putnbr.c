#include "ft.h"

int	main(int ac, char **av)
{
	int	res;

	res = 0;
	if (ac > 1)
	{
		res = ft_atoi(av[1]);
	}
	ft_putnbr_fd(res, 0);
}
