#include "libft.h"
#include <stdio.h>

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		const char *str1 = argv[1];
		char separata = argv[2][0];
		char **response = ft_split(str1, separata);
		char **presponse = response;
		char **fr = response;
		int	i = 0;
		while (*presponse)
		{
			printf("Cadena %d: %s\n", i++, *presponse++);
		}

		while (*fr)
			free(*fr++);
		free(response);
	}
	return (0);
}