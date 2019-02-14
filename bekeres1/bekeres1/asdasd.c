#include <stdio.h> printf, getline
#include <stdlib.h> atoi, atof
//@macsodev.hu
#define NEVMAX 10

int nevell(char s[]);
int getlines(char s[], int n);
int szamell(char s[]);
int main(void){
	char vezeteknev[NEVMAX + 1 + 1];
	char keresztnev[NEVMAX + 1 + 1];
	int eletkor;
	char s[NEVMAX + 1];   //eletkor bekeresehez (eloszor sztringkent, aztan atalakitjuk szamma)
	int i = 0;  //max 5 embert kerhetunk be!
	int kilep = 0;  //ures sorra ki kell tudnunk lepni
	int vnevok, knevok, evok, h;

	do{     //kulso ciklus: azert felel, hogy az 5 ember be legyen kerve + ki tudjunk lepni
		vnevok = knevok = evok = 0;
		do{     //belso ciklus (vezeteknev): a vezeteknev helyes bekereseert fele + kilepes
			printf("Adja meg a vezeteknevet: ");
			h = getlines(vezeteknev, NEVMAX + 1);
			if (h == 0){   //getline utan legtobbszor a string hosszanak ellenorzesevel kezdunk
				printf("Ures sort adott meg, a program kilep!\n");
				kilep = 1;
			}
			else if (h<3) printf("Tul rovid a nev!\n");
			else if (h>NEVMAX) printf("Tul hosszu a nev!\n");
			else if (nevell(vezeteknev) == 0) printf("Hibas vezeteknev!\n");
			else vnevok = 1;
		} while (vnevok == 0 && kilep == 0);  //addig megyunk, amig nem jo a vezeteknev ES nem akarunk kilepni
		if (kilep == 0){   //csak akkor folytassuka  tobbi adat bekereset, ha NEM akarunk kilepni
			do{ //belso ciklus (keresztnev): a keresztnev bekereseert felelos
				printf("Adja meg a keresztnevet: ");
				h = getlines(keresztnev, NEVMAX + 1);
				if (h<3) printf("Tul rovid a nev!\n");
				else if (h>NEVMAX) printf("Tul hosszu a nev!\n");
				else if (nevell(keresztnev) == 0) printf("Hibas keresztnev!\n");
				else knevok = 1;
			} while (knevok == 0);

			do{ //belso ciklus(eletkor): az eletkor bekereseert felelos
				printf("Adja meg az eletkort: ");
				h = getlines(s, NEVMAX);
				eletkor = atoi(s);

				if (h == 0) printf("Ures sort adott meg!\n");
				else if (szamell(s) == 0) printf("Hibas szamot adott meg!\n");
				else if (eletkor<18) printf("Tul fiatal!\n");
				else if (eletkor>101) printf("Tul idos!\n");
				else evok = 1;
			} while (evok == 0);
			//ha mar itt allunk, akkor megvan a 3 helyes adat
			i++;    //egy szemely adatai sikeresen bekerve!
			printf("\n%s %s, %i eves.\n", vezeteknev, keresztnev, eletkor);
		}
	} while (kilep == 0 && i<5);
}

int getlines(char s[], int n){
	int c, i;
	for (i = 0; i<n && (c = getchar()) != EOF&&c != '\n'; i++) s[i] = c;
	s[i] = '\0';
	while (c != EOF&&c != '\n') c = getchar();
	return i;
}

int nevell(char s[]){
	int i;

	if (s[0]<'A' || s[0]>'Z') return 0;  //visszaadjuk a nullat, azaz hibas, mert nem nagy betuvel kezdodik a nev

	for (i = 1; s[i] != '\0'; i++){
		if (s[i]<'a' || s[i]>'z') return 0; //hiba, mert nem kisbetut talaltunk
	}
	return 1;
}

int szamell(char s[]){
	int i;

	for (i = 0; s[i] != '\0'; i++){
		if (s[i]<'0' || s[i]>'9') return 0;  //hiba, nem szam karaktert talaltunk (igy rossz lenne az atalakitas is!)
	}
	return 1;   //itt mar biztos, hogy minden karakter szam volt, jo lesz az atalakitas
}