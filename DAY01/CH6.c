#include <stdio.h>


int main() {
	double a, b;

	printf("Entee Valeur A: ");
	scanf("%le", &a);
	printf("Entree Valeur B: ");
	scanf("%le", &b);

	printf("%.10f\n", a + b);
	printf("%.10f\n", a - b);
	printf("%.10f\n", a * b);
	printf("%.10f\n", a / b);
	return (0);
}
