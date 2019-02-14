#include <stdio.h>
#define ALSO 0
#define FELSO 300
#define LEPES 20

/* print Fahrenheit-Celsius table */
main()
{
	int fahr;
	for (fahr = ALSO; fahr <= FELSO; fahr = fahr + LEPES)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
}