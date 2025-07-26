#include <stdio.h>

int main(void) {
	double s1, s2, s3;

	printf("Please enter your sides: ");
	scanf_s("%lf%lf%lf", &s1, &s2, &s3);

	if (s1 == s2 && s2 == s3) {
		printf("It is a regular triangle.");
	}
	else {
		printf("It is not a regular triangle.");
	}

	return 0;
}