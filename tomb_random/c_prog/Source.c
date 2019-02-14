#include <stdio.h>


int main() {

	int i;
	int tomb[5];

	for (i = 0; i < 5; i++) {
		tomb[i] = rand() % 10;
		printf("%d \n", tomb[i]);
	}

	return 0;
}