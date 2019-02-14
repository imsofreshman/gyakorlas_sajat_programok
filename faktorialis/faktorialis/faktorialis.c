#include <stdio.h>

int main(){

	int i, n, elem;

	elem = 1;
	i = 1;
	n = 6;


	while (i<=n){
		
			elem = elem * i;
			i = i +1;
	}
	printf("%d\n", elem);

	return 0;
}