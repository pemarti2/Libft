#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <fcntl.h> //open function
/*
int main(int argc, char *argv[]) {
	if (argc <3)
		return (1);
    size_t i;

    if (argc == 3) 
		i = strlen(argv[1]) + strlen(argv[2]) + 1;
	else
		i = (size_t) atoi(argv[3]);
    char str1[i];
    char str1_copy[i];
    strcpy(str1, argv[1]);
    strcpy(str1_copy, argv[1]);
    char *str2 = argv[2];
    // Crear una copia de str1 para comparar con la función estándar
	printf("(LEN = %zu) DEST ORIGINAL: %s\n(LEN = %zu)DST FT: %s\n", strlen(str1_copy), str1_copy, strlen(str1), str1);
    // Usar tu función ft_strlcat
    size_t result = ft_strlcat(str1, str2, i);
    printf("Result str1 ft_strlcat: %s\n", str1);
    printf("Length of str1 ft_strlcat: %zu\n", result);

    // Usar la función estándar strlcat
    size_t original = strlcat(str1_copy, str2, i);
    printf("\nResult str1_copy strlcat: %s\n", str1_copy);
    printf("Length str1_copy strlcat: %zu\n", original);
	printf("SIZE PARAMETER %zu\n", i);

    return 0;
}

*/

int main(int argc, char **argv) {
	if (argc == 1)
	{
		printf("Lacks of arguments need 1 or more");
		return (1);
	}
	char	*str;
	char	str2[100];

	argv++;
	while (*argv)
	{
		str = *argv++;
		strcpy(str2, str);
		printf ("THE VALUE OF FT: %d\n", ft_atoi(str));
		printf ("THE VALUE OF ORIGINAL: %d\n", atoi(str2));
	}
	return 0;
}

