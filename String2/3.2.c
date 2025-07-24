#include <stdio.h>

int main(void) {
	char in, out;

	printf("ÊäÈëÄãµÄ×Ö·û£º");
	scanf_s("%c", &in, 1);

	out = in + 32;

	printf("%c\n", out);

	return 0;
}