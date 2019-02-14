#include <stdio.h>

int main(){

	char c;

	do{
		c = getchar();
		if (c >= 'A' && c <= 'Z')
			printf("A(z) %c betu atalakitva: %c, decimalisan : %d\n", c, c + 32, c);
		else if (c >= 'a' && c <= 'z')
			printf("A(z) %c betu atalakitva %c, decimalisan : %d\n", c, c - 32,c);
		else if (c <= '9' && c >= '0')
			printf("Szamot adott meg: %d\n", c);
	} while (c != '0');
	printf("\nNyomjon entert a kilepeshez!\n");
}