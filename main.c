#include "libft.h"

int main()
{
	char * splitme = strdup("Tripouille");
	char **tab = ft_split(splitme, ' ');
	printf("1:%s\n2:%p\n",tab[0],tab[1]);
}
