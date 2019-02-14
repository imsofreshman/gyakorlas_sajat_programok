#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 12
#define eloHivo 4

int getline(char s[], int lim);
int main(){



	char input[MAX];
	char tomb[MAX];
	int helyes = 0;
	int i;
	int telenor = 0;
	int vodafone = 0;
	int telekom = 0;
	int kekszam = 0;
	int zoldszam = 0;


	printf("Irjon be egy telefonszamot: \n");
	while (getline(input, MAX) && helyes == 1){
			if (atoi(input[eloHivo]) == 2)
			{
				telenor++;
				helyes++;
			}
			else if (atoi(input[eloHivo]) == 3)
			{
				telekom++;
				helyes++;
			}
			else if (atoi(input[eloHivo]) == 7)
			{
				vodafone++;
				helyes++;
			}
			else if (atoi(input[eloHivo]) == 4)
			{
				kekszam++;
				helyes++;
			}
			else if (atoi(input[eloHivo]) == 8)
			{
				zoldszam++;
				helyes++;
			}
			else
			{
				printf("Nem jo hivo szamot adott meg!\n");
			}
		}
	for (i = 0; i < strlen(input); i++){
		if (telenor == 1)
		{
			printf("A szam %i ", telenor);
		}
		
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