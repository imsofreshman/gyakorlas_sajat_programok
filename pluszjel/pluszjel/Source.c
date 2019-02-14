#include <stdio.h>

int main(){

	int a, b;

	for (a = 0; a < 10; a++){
		printf("\n*");
		for (b = 0; b < 10;b++)
			printf("*");
	}
	printf("\n");
	return 0;
}