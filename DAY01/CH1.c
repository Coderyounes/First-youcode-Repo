#include <stdio.h>


typedef struct Persone {
	char name[100];
	char prénom[100];
	int age;
	char sexe[10];
	char email[100];
} Personne_t;

int main() {
	Personne_t newPersone;
	
	printf("Enter Your Name: ");
	scanf("%s", newPersone.name);
        printf("Enter Your prenom: ");
	scanf("%s", newPersone.prénom);
	printf("Enter your age: ");
	scanf("%d", &newPersone.age);
	printf("Enter you Sexe: ");
	scanf("%s", newPersone.sexe);
	printf("Enter you Email: ");
	scanf("%s", newPersone.email);

	printf("Hello I'm %s %s, I have %d, I'm a %s, my Email is %s\n", newPersone.name,
			newPersone.prénom,
			newPersone.age,
			newPersone.sexe,
			newPersone.email);
	return (0);
}
