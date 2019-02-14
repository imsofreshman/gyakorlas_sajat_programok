#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){


	int i = 2;
	char tomb[] = "Alma" ;
	char csere = 'z';

	feltolt(tomb, i, csere);
	printf("A szoveg: %s\n", tomb);

	return 0;
}

void feltolt(char s[], int db, char mivel){

	for (db = 0; db <= strlen(s); db++)
	s[db] = mivel;

}