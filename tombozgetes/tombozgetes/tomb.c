#include <stdio.h>                              //standard input output

int main(){                                     //main fuggveny

	int i;                                      //a valtozo amivel a tombbot feltoltjuk egyesevel

	int tomb[200];                              //tiz(enegy) elemu tomb amiben a szamokat eltaroljuk

		/*fontos, hogy ahany elemu tombbel szeretnenk dolgozni,
		akkor mindig egyel tobb elemu tombot kell megadni,
		mint amennyivel feltoltjuk, vagy ha beolvasunk a tombbe,
		akkoris, mivel annelkul error lesz!!!!*/

	for (i = 0; i <= 50; i++){		            //for ciklus ahhoz hogy a tombben felfele szamoljunk nullatol kezdve
		tomb[i] = i;							//maga a tomb feltoltese, a tomb "i"-dik elemebe beirjuk az "i" erteket

		printf("a tomb %d. eleme: %d \n", i, tomb[i]);     //kiiratas
	}

	return 0;                                   //kilepes
}