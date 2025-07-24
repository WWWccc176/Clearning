#include <stdio.h>

int main(void) {
	char a = 'A';
	int b = -1;
	char c = a + b;
	char d = '-1';

	printf("%c\n", c);
	printf("%c\n", d+a);

	return 0;
}