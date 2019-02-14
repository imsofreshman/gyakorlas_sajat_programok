#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define RENDSZAM 7
#define RENDSZAMMAX 2
#define _CRT_SECURE_NO_WARNINGS

void rendezget(char s[]);
void tologat(char szo[]);
int getlines(char s[], int lim);
int rendszamEll(char s[]);
int egyforma(char s[]);
void rendezget(char s[]);
void tologat(char s[]);
int main(){
	char input[RENDSZAM + 1];
	char rendezve[RENDSZAM + 1];
	char levagva[3 + 1];
	int getL, kilep, jorendszam, levagott, a, i, osszeg;
	int rendtomb[RENDSZAMMAX + 1];
	float atlag = 0;

	kilep = jorendszam = a = osszeg = 0;

	printf("Rendszám ellenörzõ program!\n");
	printf("Adjon meg rendszámokat [AAA-123] formátumban:\n");

	do{
		getL = getlines(input, RENDSZAM + 1);
		if (!getL) { printf("Üres sor, a program kilép!\n"); kilep = 1; }
		else if (!rendszamEll(input)) printf("Nem jó formátum, Új:\n");
		else if (!egyforma(input)) printf("Nem lehet azonos betû egymás mellet, Új:\n");
		else {
			jorendszam++;

			printf("Jo megoldás: %s\n", input);
			strcpy(rendezve, input);
			rendezget(rendezve);
			printf("Rendezve: %s\n", rendezve);
			tologat(input);
			printf("Eltolva: %s\n", input);

			strcpy(levagva, &input[4]);
			levagott = atoi(levagva);
			printf("levagva: %d\n", levagott);
			rendtomb[a] = levagott;
			a++;
		}
	} while (!kilep && jorendszam < RENDSZAMMAX);

	for (i = 0; i < RENDSZAMMAX; i++)
	{
		osszeg += rendtomb[i];
	}
	atlag = (float)osszeg / RENDSZAMMAX;
	printf("Rendszám számainak átlaga: %.01f\n", atlag);

	return 0;
}

int getlines(char s[], int lim)
{
	int c, i;

	for (i = 0; i<lim && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n') c = getchar();
	return i;
}

int rendszamEll(char s[])
{
	int i;

	for (i = 0; i<3; i++)
	{
		if (s[i] < 'A' || s[i] > 'Z') return 0;
	}

	if (s[3] != '-' && !(isspace(s[3]))) return 0;

	for (i = 4; i<7; i++)
	{
		if (s[i] < '0' || s[i] > '9') return 0;
	}

	if (s[7] == '\0') return 1; else return 0;
}

int egyforma(char s[])
{
	int i;

	for (i = 0; i < 3; i++)
	{
		if (s[i] == s[i + 1]) return 0;
	}

	return 1;
}

void rendezget(char s[])
{
	int i, j, ret;
	char cs;

	for (i = 0; i < 3; i++){
		for (j = i + 1; j < 3; j++){
			if (s[j] < s[i]){
				cs = s[j];
				s[j] = s[i];
				s[i] = cs;
			}
		}
	}

	for (i = 4; i < 7; i++){
		for (j = i + 1; j < 7; j++){
			if (s[j] < s[i]){
				cs = s[j];
				s[j] = s[i];
				s[i] = cs;
			}
		}
	}

}

void tologat(char s[])
{
	int i, j;
	char c;

	for (i = 0; i < 3; i++){
		if (s[i] == 'Z')
		{
			s[i] = 'A';
		}
		else {
			s[i] = s[i] + 1;
		}
	}
}