#include "ft.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_bzero(av[1], ft_atoi(av[2]));
	}
	printf("str :%s\n", av[1]);
	printf("after nbytes :%s\n", &av[1][ft_atoi(av[2])]);
}
