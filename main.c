#include "libft.h"
#include <stdio.h>
#include <string.h>

char apiWhatever (unsigned int index, char c)
{
	return c + index;
}

int main (int argc, char *argv[])
{
	
	/*
	 * test ft_strmapi	
	char	*str = argv[1];
	char	*result = ft_strmapi(str, apiWhatever);
	printf("INPUT: %s\nOUTPUT: %s\n", str, result);
	free(result);
	*/
	/*
	 * test ft_itoa
	int 	i = ft_atoi(argv[1]);
	char	*str = ft_itoa(i);
	
	printf("INPUt: %d\nRESULT: %s\n", i, str);
	printf("LEN: %ld\n", ft_strlen(str));
	free(str);
	*/

	/*
	 * test **ft_split
	char	*str1 = argv[1];
	char	str2 = argv[2][0];
	char	**result = ft_split(str1,str2);
	printf("S1: %s\n SPLITER: %c\n", str1, str2);
	while (*result)
	{
		printf("RESULT: %s\n", *result);
		result++;
	}
	*/
	return (0);
}
