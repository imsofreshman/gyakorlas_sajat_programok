#include <stdio.h>
//Írjon programot, amely 200-tól számol vissza 40-ig 20-asával.
//for

int main(){

	int i, n;

	for (i = 100, n=101; i >= 40, n>=40; i = i - 20, n = n -20)
		printf("%d-%d ", i, n);
	return 0;
}



