#include <stdio.h>

int main(void) {
	double a, b, c;

	printf("Please enter your numbers: ");
	scanf_s("%lf%lf%lf", &a, &b, &c);

	double min = a;

	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	
	printf("The minimun number is: %f\n", min);
	

	return 0;
}