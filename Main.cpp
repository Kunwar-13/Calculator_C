#include<stdio.h>
#include<string.h>

double addition(double[], int);

int main(void) {

	printf("Choose your operatoration: \n");
	printf("1. Addition(+)\n");
	printf("2. Subtraction(-)\n");
	printf("3. Multiplication(x)\n");
	printf("4. Division(/)\n");
	printf("5. Square(\u00B2)\n");
	printf("6. Cube(\u00B3)\n");
	printf("7. Square root(\u221A)\n");
	printf("8. Square root(\u221B)\n");
	
}

double addition(double array[], int x) {

	int i = 0;
	double sum = 0;

	for (i = 0; i < x; i++) {

		sum += array[i];

	}

	return sum;
}