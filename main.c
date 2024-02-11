#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void test_functions(int argc, char **argv);

void ft_print_result(char *str) {
    if (str)
        printf("TEST RESULT:\n%s\n", str);
    else
        printf("TEST RESULT: NULL\n");
}

void test_ft_strtrim(int test_num, char s1[], char set[]) {
    char *strtrim = ft_strtrim(s1, set);
    printf("\nTest %d:\n", test_num);
    if (!strtrim)
        ft_print_result("NULL");
    else {
        ft_print_result(strtrim);
        if (strtrim == s1)
            ft_print_result("\nA new string was not returned");
    }
    free(strtrim);
}

void test_ft_split(int test_num, char *str, int s) {
    int i = 0;
    char **tabstr = ft_split(str, s);
    printf("\nTest %d:\n", test_num);
    if (!tabstr)
        ft_print_result("NULL");
    else {
        while (tabstr[i] != NULL) {
            ft_print_result(tabstr[i]);
            i++;
        }
        free(tabstr);
    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <function_name>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "ft_strtrim") == 0)
	{
		test_ft_strtrim(1, "lorem \n ipsum \t dolor \n sit \t amet", " ");
		printf("EXPECTED RESULT:\nlorem \n ipsum \t dolor \n sit \t amet");
    	test_ft_strtrim(2, "lorem ipsum dolor sit amet", "te");
		printf("EXPECTED RESULT:\nlorem ipsum dolor sit am");
    	test_ft_strtrim(3, " lorem ipsum dolor sit am", "l ");
		printf("EXPECTED RESULT:\norem ipsum dolor sit am");
    	test_ft_strtrim(4, "lorem ipsum dolor sit amet", "tel");
		printf("EXPECTED RESULT:\norem ipsum dolor sit am");
	} 
	else if (strcmp(argv[1], "ft_split") == 0)
	{
        test_ft_split(1, "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
		test_ft_split(2, "       ", ' ');
		test_ft_split(3, " ", 'z');
    }
	else if (strcmp(argv[1], "ft_itoa") == 0)
	{
		printf("RESULT FT_ITOA (INT == 999)\n%s\n", ft_itoa(999));
		printf("RESULT FT_ITOA (INT == -999)\n%s\n", ft_itoa(-999));
		printf("RESULT FT_ITOA (INT == -1234567)\n%s\n", ft_itoa(-1234567));
		printf("RESULT FT_ITOA (0)\n%s\n", ft_itoa(0));
		printf("RESULT FT_ITOA (-1)\n%s\n", ft_itoa(-1));
		
	}
	else if (strcmp(argv[1], "ft_putnbr_fd") == 0)
	{
		ft_putnbr_fd(999, 0);
		write(0, "\n", 1);
		ft_putnbr_fd(-999, 0);
		write(0, "\n", 1);
		ft_putnbr_fd(-1234567, 0);
		write(0, "\n", 1);
		ft_putnbr_fd(0, 0);
		write(0, "\n", 1);
		ft_putnbr_fd(-1, 0);
		write(0, "\n", 1);
	}
	else if (strcmp(argv[1], "ft_substr") == 0)
	{
		ft_print_result(ft_substr("", 1, 1));
	}
    return 0;
}



