#include <stdio.h>


int main() {
	
	int numero;
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	int i, cont = 0;
	
	/*
	
	i = 1 			3 % 1 da resto 0
	i = 2			3 % 2 da resto 1
	i = 3			3 % 3 da resto 0
	
	3
	*/
	
	for (i = 1; i <= numero; i++) {
		if(numero % i == 0) {
			cont++;
		}
	}
	
	if (cont == 2) {
		printf("El numero %d es primo", numero);
	} else {
		printf("El numero %d NO es primo", numero);
	}

	return 0;
}
