#include <stdio.h>
#include <ctype.h>

#define NEVMAX 32
#define SZAM 10
#define MAXEMBER 3

int getYourLine(char s[], int lim);
int nevell(char s[]);
int szame(char s[]);

int main()
{
	char nev[NEVMAX + 1];
	char szam[NEVMAX + 1];
	char maxdobo[NEVMAX + 1];
	char mindobo[NEVMAX + 1];
	int getL, nevok, szamok, szamint, kilep, maxember, maxdobas, mindobas, a;

	nevok = szamok = kilep = maxdobas = mindobas = 0;
	maxember = 1;

	printf("\t\t\t\tHogolyo\n\tA program eloszor a nevet keri be, majd a dobasi tavolsagot!\n\n");

	do {
		do
		{
			printf("Adja meg a %d. nevet: ", maxember);
			getL = getYourLine(nev, NEVMAX + 1);
			if (!getL) { printf("Ures sor, kilepes\n"); kilep = 1; }
			else if (!nevell(nev)) printf("Helytelen formatum, helyes (Peter)!\n");
			else {
				nevok++;
			}
		} while (!kilep && !nevok);

		if (!kilep) {
			do
			{
				printf("Adja meg a dobasi tavolsagot: ");
				getL = getYourLine(szam, SZAM + 1);
				if (!getL) printf("Ures sor, ujat\n");
				else if (!szame(szam)) printf("Nem szamot adott meg\n");
				else {
					a = atoi(szam);
					if (a > maxdobas) {
						maxdobas = a;
						strcpy(maxdobo, nev);
					}
					if (maxember == 1){
						mindobas = a;
					}
					else if (a < mindobas) {
						mindobas = a;
						strcpy(mindobo, nev);
					}
					szamok++;
					maxember++;
				}
			} while (!szamok);
		}
	} while (!kilep && maxember <= MAXEMBER);

	if (nevok && szamok) {
		printf("Legnagyobatt dobo neve: %s\n", maxdobo);
		printf("Dobasa: %d\n", maxdobas);
		printf("Legkisebbet dobo neve: %s\n", mindobo);
		printf("Dobasa: %d\n", mindobas);
	}

	return 0;
}

int getYourLine(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n') c = getchar();
	return i;
}

int nevell(char s[])
{
	int i;
	if (s[0] < 'A' || s[0] > 'Z') return 0; // Nem nagybetû az elsõ karakter
	for (i = 1; s[i] != '\0'; i++) {
		if (s[i] < 'a' || s[i] > 'z') return 0; // A maradék többi kisbetü
	}
	return 1;
}

int szame(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] < '0' || s[i] > '9') return 0;
	}
	return 1;
}