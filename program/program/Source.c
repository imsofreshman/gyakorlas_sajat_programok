#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 10



int getline(char s[], int lim);
int main(){

	int g[MAX];


	int i = 0;	 

	printf("Kerek egy stringet: \n");

	i = getline(g, MAX + 1);
	while (i != 'x')
		printf("%s\n", i);

	


	return 0;
}

int getline(char s[], int lim)     //char s[] amibe beleir, int lim amennyit a max
{
	int i;
	char c;
	for (i = 0; i<lim && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n')
		c = getchar();
	return i;
}