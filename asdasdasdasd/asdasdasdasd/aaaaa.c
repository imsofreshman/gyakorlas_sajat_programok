#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10
#define KLIENS 4

int getline(char s[], int lim);
int main(){

	//deklaralas
	char nev[MAX + 1];
	int getl;
	int kilep = 0;
	int embermax = 0;

	//fo fuggveny
	do{
		printf("Adjon meg egy nevet:\n");
		getl = getline(nev, MAX + 1);
		if (!getl){
			printf("Ures sort adott meg\n");
		}
		else if (strlen(nev) > 9){
			printf("Tul hosszu nev\n");
		}
		else { printf("Jo nev\n"); }
		embermax++;
	} while (kilep == 0 && embermax < KLIENS);
	return 0;
}

int getline(char s[], int lim)               //getline fuggveny
{
	int i, c;
	for (i = 0; i<lim && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n') c = getchar();
	return i;
}
