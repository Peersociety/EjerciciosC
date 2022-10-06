#include <stdio.h>


int main() {
	
	int n;
	printf("Ingrese la cantidad de elementos del arreglo: ");
	scanf("%d", &n);
	
	int arr[n], i;
	
	for (i = 0; i < n; i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &arr[i]);
	}
	
	/*
	
	[1, 2, 5, 3, 4]
	
	*/
	
	int mayor = arr[0];
	
	for (i = 1; i < n; i++) {
		if (arr[i] > mayor) {
			mayor = arr[i];
		}
	}
	
	printf("El mayor elemento es: %d\n", mayor);
	
	int menor = arr[0];
	
	for (i = 1; i < n; i++) {
		if (arr[i] < menor) {
			menor = arr[i];
		}
	}
	
	printf("El menor elemento es: %d\n", menor);

	return 0;
}
