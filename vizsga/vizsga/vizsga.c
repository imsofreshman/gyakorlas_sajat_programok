#include <stdio.h>
#define MAX 3

int getline(char s[], int lim);
int nevell(char s[]);


int main(){
	

	char rendszam[MAX];
	int g;
	int i;
	do{	
			g = getline(rendszam, MAX);
			printf("%s\n", rendszam);
			if (g == 0){
				printf("nem adott meg rendszamot\n");
			}
			if (!nevell(rendszam)){
				printf("Nem betut adott meg\n");
			}



	} while (g == 0);
	

	return 0;
}
int getline(char s[], int lim){
	int c, i;
	for (i = 0; i < lim && (c = getchar()) != '\n' && c != EOF; i++)
		s[i] = c;
	s[i] = '\0'; // tömb lezárasa
	while (c != '\n' && c != EOF)
		c = getchar(); // puffer ürítése
	return i; // visszateresi értek: string hossza
}
int nevell(char s[])
{
	int i;
	for (i = 0; s[i] < 3; i++){
		if (s[i] < 'A' || s[i] > 'Z') return 0; // A maradék többi kisbetü
	}
	return 1;
}