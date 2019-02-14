#include <stdio.h>

int getline(char s[], int lim);
int main(){

	int i;
	int tomb[5];
	char g;


	do
	{
		printf("Blabalbabal");

		g = getline;

	} while (g != 'X');



	}
int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;



	return 0;
}