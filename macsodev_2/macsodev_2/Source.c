#include <stdio.h>

int main(){

	int tomb[10];
	int i;
	int j;
	for (i = 1, j = 0; i <= 50, j < 10; i++){
		if (i % 2){
			tomb[j] = i;
			j++;
		}
			}
			for (i = 0; i < 10; i++)
				printf("%d = %d\n", i, tomb[i]);
}