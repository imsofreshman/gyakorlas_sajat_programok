#define _CRT_SECURE_NO_WARNINGS //scanf müködhessen
#include <stdio.h>              //standard input output


int main(){

	float a;

	do{
		printf("adjon meg egy szamot: \n");
		scanf("%f", &a);
		if (a <= 100)
			printf("szaznal kisebbet adott meg!\n");
		else
			printf("szaznal nagyobbat adott meg!\n");
	} while (a != 0);
		printf("nullat adott meg!\n");
}