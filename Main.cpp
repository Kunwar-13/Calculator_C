
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

	switch (operator) {

	case1:
		printf("How many numbers you want to add");
		break;

	case2:
		printf("How many numbers you want to subtract");
		break;

	case3:
		printf("How many numbers you want to multiply");
		break;

	case4:
		printf("How many numbers you want to divide");
		break;
	}
}

