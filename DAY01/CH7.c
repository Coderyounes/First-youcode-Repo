#include <stdio.h>

int main() {
	float a, b, c;
	float moy;
	
	printf("Entrez le premier nombre: ");
	scanf("%f", &a);
	printf("Entrez le deuxième nombre: ");
	scanf("%f", &b);
	printf("Entrez le troisième nombre: ");
	scanf("%f", &c);
	
	moy = (a * 2 + b  * 3 + c * 5) / 10;
	
	printf("La moyenne C'est: %.2f\n", moy);
	return (0);
	
}
