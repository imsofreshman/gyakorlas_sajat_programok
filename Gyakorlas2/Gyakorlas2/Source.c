#include <stdio.h>
#include <stdlib.h>


int getline(char s[], int lim);
int main(){


	char tomb[10];
	int g; 

	g = getline;

	if (g == 'szar'){
		printf("Azt irtad h szar");
	}
	else
	{
		printf("%s\n", tomb);
	}

}

int getline(char s[], int lim){
	int i, c;
	for (i = 0; i<lim && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n') c = getchar();
	return i;
}