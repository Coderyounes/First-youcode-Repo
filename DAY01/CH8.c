#include <stdio.h>


int main() {
	int a, b, c;
	printf("entree A: ");
	scanf("%d", &a);
	printf("entree B: ");
	scanf("%d", &b);
	printf("entree C: ");
	scanf("%d", &c);

	printf("moynne géometrique = %d\n", (a * b * c)^(1/3));
	return (0);
}
