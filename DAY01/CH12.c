#include <stdio.h>

int main () {
	int num = 1234;
	int rev = 0;
	printf("Origin %d\n", num);
	while (num > 0) {
		rev = rev * 10 + num % 10;
		num = num / 10;
	}
	printf("reverse %d\n", rev);
	return (0);
}
