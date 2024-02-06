#include "libft.h"
#include <stdio.h>

int main (int argc, char **argv)
{
	if (argc == 1)
		return 1;
	char *num = argv[1];
	int iAtoi = atoi(num);
	int iFtatoi = ft_atoi(num);

	printf ("ATOI ORIGINAL %d\n", iAtoi);
	printf ("FT_atoi %d\n", iFtatoi);
	return 0;
}
