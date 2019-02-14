#include <stdio.h>
#include <string.h>

int getline(char s[], int lim);
int main(){

	char tomb[10];
	int bekert;
	do{
		printf("adjon meg max 10 karaktert:\n");
		bekert = getline(tomb, 10);
		if (bekert == 0){
			printf("ures sort adott meg\n");
		}
		else if (bekert <= 9){
			printf("adjon meg tobb karaktert \n");
		}
		else{
			printf("karakterek: %s\n", tomb);
		}
	} while (bekert = 10);
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