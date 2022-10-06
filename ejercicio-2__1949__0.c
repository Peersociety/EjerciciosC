#include <stdio.h>


int main() {
	
	int arr1[10], arr2[10];
	
	int i, n = 10;
	
	printf("Elementos del arreglo 1\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}

	printf("Elementos del arreglo 2\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr2[i]);
	}
	
	int sum1 = 0, sum2 = 0;
	
	for (i = 3; i <= 8; i++) {
		sum1 += arr1[i];
		sum2 += arr2[i];
	}
	
	printf("La diferencia entre las sumas es: %d\n", sum1 - sum2 >= 0 ? sum1 - sum2 : sum2 - sum1);

	return 0;
}
