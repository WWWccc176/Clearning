#include <stdio.h>

int main(void) {
	double s1, s2, s3;

	printf("Please enter your sides: ");
	scanf_s("%lf%lf%lf", &s1, &s2, &s3);

	if (s1*s1+s2*s2==s3*s3|| s1 * s1 + s3 * s3 == s2 * s2 || s3 * s3 + s2 * s2 == s1 * s1) {
		printf("It is a right triangle.");
	}
	else {
		printf("It is not a right triangle.");
	}

	return 0;
}