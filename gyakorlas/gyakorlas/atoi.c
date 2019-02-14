#include <stdio.h>
#include <stdlib.h>



int getline(char s[], int lim);

int main(void){


	int i, h;
	char s[10];
	do{
		printf("Adjon meg egy szamot: \n");
		i = getline(s, 10);
		h = atoi(s);
		if (h = 0) printf("nullat adott meg");
	} while (h == 0);
	return 0;
}

int getline(char s[], int lim){
	int c, i;
	for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; i++) s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n') c = getchar();
	return 1;
}