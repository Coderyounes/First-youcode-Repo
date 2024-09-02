#include <stdio.h>


int main () {
	int temp;

	printf("Entréé temprérature en Celsius: ");
	scanf("%d", &temp);
	printf("température en Kelvin: %.2f\n", temp + 273.15);
	return (0);
}
