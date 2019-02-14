#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NEVMAX 10

int getline(char s[], int lim);
int main(void){

	int db = 0;
	int kilep = 0;
	int eletkor;
	char veznev [NEVMAX + 1];
	char keresztnev [NEVMAX + 1];
	char s[NEVMAX + 1];
	int g;                     //getline
	int veznevok, keresztnevok, eletkorok;

	do{
		veznevok = keresztnevok = eletkorok = 0;
		do{
			printf("Adjon meg egy vezeteknevet: \n");
			g = getline(veznev, NEVMAX + 1);
			if (g == 0){
				printf("Ures sort adott meg!\n");
				kilep = 1;
			}
			else if (g<3) printf("Tul rovid vezetknev \n");
			else if (g>NEVMAX) printf("Tul hosszu vezeteknev \n");
			else veznevok = 1;
		} while (veznevok == 0 && kilep == 0);
		if (kilep == 0){
			do{
				printf("Adjon meg keresztnevet: \n");
				g = getline(keresztnev, NEVMAX);
				if (g == 0) printf("Ures sort adott meg\n");
				else if (keresztnev < 3) printf("Tul rovid nevet adott meg\n");
				else if (keresztnev > NEVMAX + 1) printf("Tul hosszu nevet adott meg\n");
				else keresztnevok = 1;
			} while (keresztnevok == 0);
			do{
				printf("Adjon meg egy eletkort: \n");
				g = getline(s, NEVMAX + 1);
				eletkor = atoi(s);
				if (eletkor == 0) printf("Ures sort adott meg \n");
				else if(szamell(s) == 0) printf("hibasat adott meg");
				else if (eletkor < 18) printf("Tul fiatal \n");
				else if (eletkor > 101) printf("Tul oreg");
				else (eletkorok = 1);
			} while (eletkorok == 0);
			db++;
		}
	} while (kilep == 0 && db < 5);

}



//getline fuggveny

int getline(char s[], int lim){
	int c, i;
	for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; i++) s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n') c = getchar();
	return 1;
}

int szamell(char s[]){
	int i;

	for (i = 0; s[i] != '\0'; i++){
		if (s[i]<'0' || s[i]>'9') return 0;  //hiba, nem szam karaktert talaltunk (igy rossz lenne az atalakitas is!)
	}
	return 1;   //itt mar biztos, hogy minden karakter szam volt, jo lesz az atalakitas
}