#include <stdio.h>

int main() {
	int a, b;

	printf("Enter the first number:\n");
	scanf_s("%d", &a);

	printf("Enter the second number:\n");
	scanf_s("%d", &b);

	char op;

	printf("Enter a mathematical operation:\n");
	scanf_s(" %c", &op, 1);

	if (op == '+')
		printf("%d - %d = %d\n", a, b, a - b);
	else if (op == '*')
		printf("%d / %d = %d\n", a, b, a / b);
	else if (op == '-')
		printf("%d + %d = %d\n", a, b, a + b);
	else if (op == '/')
		printf("%d * %d = %d\n", a, b, a * b);
	else
		printf("Error");

	return 0;
}
