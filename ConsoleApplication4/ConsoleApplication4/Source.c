#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define stringHOSSZ 20


int getline(char s[], int lim);
void feltolt(char s[], int db, char mivel);
int main(){

	char csereltstring;
	char ch;
	int szam;
	int get;
	char tomb[stringHOSSZ + 1];
	int amivel;
	int szovegOK;
	int szamOK;
	int kilep;
	int stringOK;

	printf("Betu konvertalo program!\n");
	do
	{
		szovegOK = 0;
		szamOK = 0;
		kilep = 0;
		stringOK = 0;
		do
		{

			printf("Irjon be egy stringet: \n");
			get = getline(tomb, stringHOSSZ);		   //string bekerese
			if (!get)		   //ha beirjuk, hogy kilep, akkor vege a bekeresnek
			{
				printf("A program kilep!\n");
				kilep++;
			}
			else if (get <= 2)						   //minimum string hossz
			{
				printf("Tul rovid stringet adott meg!\n");
			}
			else if (get >= 15)							//maximum string hossz
			{
				printf("Tul hosszu stringet adott meg!\n");
			}
			else
			{
				printf("A szoveg jo volt, a string: %s \n", tomb);
				szovegOK++;
			}
		} while (!szovegOK && !kilep);			//feltetlek a tovabblepeshez

		do
		{
			printf("Adja meg hanyadik betut csereljem\n");
			szam = getchar();							 //szam bekerese
			if (!szam || !isdigit(szam))				 //ha nem szamot vagy üres sort adott meg kilep
			{
				printf("Nem szamot adott meg\n");
				kilep++;
			}
			else
			{
				printf("A(z) %c -ik betu fog cserelodni!\n", szam);
				szamOK++;
			}
		} while (!szamOK && !kilep);
		fflush(stdin);					   //input uritese
		do
		{
			printf("Adja meg milyen beture csereljem\n");
			ch = getchar();							   //betu bekerese
			if (!ch)
			{
				printf("Nem adott meg karaktert!\n");	 //ures sort adott meg
				kilep++;
			}
			else
			{
				atoi(ch)
				feltolt(tomb, szam, ch);			 //cserelo fuggveny
				printf("Az uj string : %s\n", tomb);
				stringOK++;
			}

		} while (!stringOK);
	}
	while (!szovegOK && !szamOK && !stringOK && !strcmp(tomb, "kilep"));
	return 0;
}

void feltolt(char s[], int db, char mivel){
	
	int i;
	for (i = 0; s[i]!= '\0' ; i++)		  //tömb bejárása
		if (s[i] == db)					 //ha 
		{
			s[i] = s[mivel];				//kicseréli a karaktert
		}	
}
int getline(char s[], int lim){
	int i, c;
	for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n') c = getchar();
	return i;
}