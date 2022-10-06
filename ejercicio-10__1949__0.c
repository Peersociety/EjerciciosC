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
	
	for (i = 0; i < n; i++) {
		if (arr[i] % 5 == 0) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}
