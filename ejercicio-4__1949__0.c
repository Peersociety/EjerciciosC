#include <stdio.h>


int main() {
	
	/*
	k = 5
	[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
	*/
	
	int n;
	printf("Ingrese la cantidad de elementos del arreglo: ");
	scanf("%d", &n);
	
	int arr[n], i;
	
	for (i = 0; i < n; i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &arr[i]);
	}
	
	int k;
	printf("Ingrese el elemento a buscar: ");
	scanf("%d", &k);
	
	for (i = 0; i < n; i++) {
		if (k == arr[i]) {
			printf("Existe en el arreglo\n");
			
			return 0;
		}
	}
	
	printf("No existe en el arreglo\n");

	return 0;
}
