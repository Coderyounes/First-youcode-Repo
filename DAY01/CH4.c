#include <stdio.h>

int main() {
	float km;
	printf("Entré la vitesse en KM/h: ");
	scanf("%f", &km);
	printf("la Vitesse C'est %.2f/s\n", km * 0.27778);
	return (0);
}
