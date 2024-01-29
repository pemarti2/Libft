#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <fcntl.h> //open function

int main (int argc, char *argv[])
{
	if (argc == 1)
		return (0);
	char	*test = argv[1];
	int 	fd = open ("test.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putnbr_fd(ft_atoi(test), fd);
	close(fd);

	return (0);
}
