#include <stdio.h>

int main() {
	int C;

	printf("Entree la temperature: ");
	scanf("%d", &C);

	if ( C < 0) {
		printf("Solide\n");
	} else if ( 0 <= C && C < 100) {
		printf("Liquide\n");
	} else {
		printf("Gaz\n");
	}

	return (0);
}
