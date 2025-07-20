#include <stdio.h>

int main(void) {
	float a = 0.1;
	float b = a + a + a + a + a + a + a + a + a + a;
	printf("10a = %.16f", b);
}