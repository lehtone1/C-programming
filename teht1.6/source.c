#include <stdio.h>
#include <math.h>

double vectorlength(double x, double y, double z)
{
	return sqrt(pow(x, 2.0) + pow(y, 2.0) + pow(z, 2.0));
}

int main(void) 
{
	
	printf("%lf\n", vectorlength(1.0, 1.0, 1.0));
	printf("%lf\n", vectorlength(1.1, 1.1, 1.1));
	printf("%lf\n", vectorlength(2.0, 2.0, 1.0));
	return 0;
}