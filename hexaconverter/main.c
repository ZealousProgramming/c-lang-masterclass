#include <stdio.h>

int main(void) {
	printf("-----\n");
	printf("Welcome to the Decimal to Hexadecimal Converter!\n");
	printf("Enter a number: ");

	int some_number;
	scanf("%d", &some_number);

	printf("Decimal representation: %9d\n", some_number);
	printf("Hexadecimal representation: %9X\n", some_number);

	printf("-----\n");
	return 0;
}