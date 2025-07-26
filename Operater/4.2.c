#include <stdio.h>

int main(void) {
	int a, b;
	a = b = 1;

	printf("%d\n",3 > 2 > 1);
	printf("%d\n", (2 < 2) == (2 == 1));
	printf("%d\n", !a==1);
	printf("%d\n", !!(a < b));

	return 0;
}