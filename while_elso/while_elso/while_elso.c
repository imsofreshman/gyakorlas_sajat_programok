#include <stdio.h>
//�rjon programot, amely 200-t�l sz�mol vissza 40-ig 20-as�val
//while

int main(){

	int i=200;

	while (i>=40){
		printf("%d ", i);
		i = i - 20;
	}
	return 0;
}
