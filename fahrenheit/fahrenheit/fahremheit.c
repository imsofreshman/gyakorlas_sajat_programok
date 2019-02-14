#define ALSO 0
#define FELSO 3000
#define LEPES 20
#define LAPSOR 20
#include <stdio.h>
void main(){
	int fahr, sor;
	sor = LAPSOR;
	printf("\nFahrenheit - Celsius atszamitas:\n");
	for (fahr = ALSO; fahr <= FELSO; fahr += LEPES) {
		if (sor == LAPSOR) {
			printf("\n\n\nFahrenheit - Celsius\n");
			printf("--------------------\n");
			sor = 0;
		}
		sor++;
		printf("%10d%10.1f\n", fahr, (5. / 9.)*(fahr - 32));
		if (sor == LAPSOR) {
			printf("\nA tovabbitashoz nyomjon ENTERt!");
			while (getchar() != '\n');
		}
	}
}