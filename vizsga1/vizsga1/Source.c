#include <stdio.h>
#define MAX 120

int elojel(float sz1, float sz2);
int getline(char s[], int lim);
int main(){

	int i;
	char tomb[10];
	for (i = 0; i < 10; i++){
		printf("Kérem a %d.elemet!", i);
		getline(tomb, 10);
	}

	return 0;
}
int getline(char s[], int lim){
	int c, i;

	for (i = 0; i<lim && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
	s[i] = '\0';
	while (c != EOF && c != '\n') c = getchar();
	return i;
}

int elojel(float sz1, float sz2){

	if ((sz1 > 0 && sz2 > 0) || (sz1 < 0 && sz2 < 0))
	{
		printf("Jo szamok\n");
	}
	else
	{
		printf("Rossz szamok\n");
	}
	return 0;
}