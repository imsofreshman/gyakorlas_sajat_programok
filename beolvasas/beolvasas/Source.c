#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 10									//hany karakteruek az egyes elemek a tombunkben 
#define tombElem 3								//hany elemu a tomb

int getline(char s[], int lim);
int main(){

	int i;
	float sum = 0;
	int db = 0;
	char tomb[MAX + 1];
	char input[MAX + 1];

	printf("%c: ", db + 'a');
	while (getline(input, MAX) && db <= 2){
		if (atof(input) != 0)
			tomb[db++] = atof(input);
		if (db <= 2)
			printf("%c: ", db + 'a');
	}
	for (i = 0; i <= 2; i++) {
		sum += tomb[i];
		printf("A tomb atlaga: %f\n", sum);
	}
	return 0;
}

int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i<lim && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n') c = getchar();
	return i;
}