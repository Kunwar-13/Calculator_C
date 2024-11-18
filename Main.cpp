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
	
	int operator = 0;
	sscanf("%d", &operator, stdin);
}

double addition(double array[], int x) {

	int i = 0;
	double sum = 0;

	for (i = 0; i < x; i++) {

		sum += array[i];

	}

	return sum;
}



int subtraction() {

	double ans = 0.00;
	double y = 0.00;
	int i = printf("Enter the total number of numbers you want to add: ");
	scanf_s("%d", &i);
	while (i >= 0) {
		double num = printf("Enter num: ");
		scanf_s("%f", &num);
		while (y < 1) {
			ans = num;
			y++;
		}
		ans = ans - num;
		i--;
	}
	return ans;

}