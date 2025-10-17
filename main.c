#include "libft.h"

int main(void)
{
    printf("Longueur de 'Hello' = %ld\n", ft_strlen("Hello"));

	char str0[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str0);

	// Fill 8 characters starting from str[13] with '.'
	ft_memset(str0 + 13, '.', 8*sizeof(char));

	printf("After memset():  %s", str0);

	char str1[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore bzero(): %s\n", str1);

	// Fill 8 characters starting from str[13] with '.'
	bzero(str1 + 10, 10);

	printf("After bzero():  %s", str1);
	
	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore ft_bzero(): %s\n", str2);

	// Fill 8 characters starting from str[13] with '.'
	ft_bzero(str2 + 10, 10);

	printf("After ft_bzero():  %s", str2);
	return (0);
}
