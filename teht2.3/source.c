# include <stdio.h>

void simple_multiply(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int res = a * b;
	printf("%d * %d = %d\n", a, b, res);
}

void simple_math(void)
{
	float a, b;
	char c;
	scanf("%f %c %f\n", &a, &c, &b);
	switch(c) {
		case '+':
			printf("%.1f\n", a + b);
			break;
		case '-':
			printf("%.1f\n", a - b);
			break;
		case '*':
			printf("%.1f\n", a * b);
			break;
		case '/':
			printf("%.1f\n", a / b);
			break;
		default:
			printf("ERR\n");
			break;
	}
}


int main(void)
{
	//simple_multiply();
	simple_math();
	return 0;
}