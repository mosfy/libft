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

	printf("After ft_bzero():  %s\n", str2);

	// Initialize a variable
    int a = 20;
    int b = 10;
    
    printf("Value of b before calling memcpy: %d\n", b);

    // Use memcpy to copy the value of 'a' into 'b'
    memcpy(&b, &a, sizeof(int)); 

    printf("Value of b after calling memcpy: %d\n", b);

    // Initialize a variable
     a = 20;
     b = 10;
    
    printf("Value of b before calling ft_memcpy: %d\n", b);

    // Use memcpy to copy the value of 'a' into 'b'
    ft_memcpy(&b, &a, sizeof(int)); 

    printf("Value of b after calling ft_memcpy: %d\n", b);
	

	char str4[50] = "123456789";
	printf("\nBefore memcpy(): %s\n", str4);

	memcpy(str4,str4+2,5);

	printf("After memcpy():  %s\n", str4);

	char str7[50] = "123456789";
	printf("\nBefore ft_memcpy(): %s\n", str7);

	ft_memcpy(str7,str7+2,5);

	printf("After ft_memcpy():  %s\n", str7);

	char str3[50] = "123456789";
	printf("\nBefore memmove(): %s\n", str3);

	memmove(str3,str3+2,5);

	printf("After memmove():  %s\n", str3);

	char str10[50] = "123456789";
	printf("\nBefore ft_memmove(): %s\n", str10);

	ft_memmove(str10,str10+2,5);

	printf("After ft_memmove():  %s\n", str10);


	char str5[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str6[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str8[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str9[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    printf("Avant memcpy :  %s\n", str5);
    memcpy(str5 + 5, str5, 20);  
    printf("Après memcpy :  %s\n", str5);

    printf("\n");

    printf("Avant ft_memcpy :  %s\n", str8);
    ft_memcpy(str8 + 5, str8, 20);  
    printf("Après ft_memcpy :  %s\n", str8);

    printf("\n");

	printf("Avant memmove : %s\n", str6);
    memmove(str6 + 5, str6, 20);  
    printf("Après memmove : %s\n", str6);

	printf("\n");

    printf("Avant ft_memmove : %s\n", str9);
    ft_memmove(str9 + 5, str9, 20);  
    printf("Après ft_memmove : %s\n", str9);

	return (0);
}
