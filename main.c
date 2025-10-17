#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("Longueur de 'Hello' = %ld\n", ft_strlen("Hello"));

	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nft_Before memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	ft_memset(str + 13, '.', 8*sizeof(char));

	printf("ft_After memset():  %s", str);
	return (0);

    return 0;
}
