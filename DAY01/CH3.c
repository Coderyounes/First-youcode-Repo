#include <stdio.h>

int main() {

	float km;
	printf("Entree la distance on KM: ");
	scanf("%f", &km);
	printf("la distance en yards: %.2f\n", km * 1093.61);
	return (0);
}
