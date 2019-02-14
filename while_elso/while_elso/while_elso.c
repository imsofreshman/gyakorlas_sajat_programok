#include <stdio.h>
//Írjon programot, amely 200-tól számol vissza 40-ig 20-asával
//while

int main(){

	int i=200;

	while (i>=40){
		printf("%d ", i);
		i = i - 20;
	}
	return 0;
}
