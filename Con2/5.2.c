#include <stdio.h>

int main(void) {
	int bound = 3000;
	int t = 0;
	int p = 0;

	printf("Please input your total partcipants: ");
	scanf_s("%d", &p);
	t = 300 * p;

	if (bound >= t) {
		printf("Total: %d", t);
	}
	if (bound < t) {
		double discounted = t * 0.8;
		printf("Total: %f", discounted);
	}
}