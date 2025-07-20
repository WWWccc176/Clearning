#include <stdio.h>

int main(void) {
	printf("size of long int: %zu\n", sizeof(long int));
	printf("size of long long int: %zu\n", sizeof(long long int));
	printf("size of float: %zu\n", sizeof(float));
	printf("size of double: %zu\n", sizeof(double));
	printf("size of long double: %zu\n", sizeof(long double));
	printf("size of short int: %zu\n", sizeof(short int));
	printf("size of long int: %llu\n", sizeof(long int));

	int a = 0;
	printf("size of a: %zu", sizeof(a));
}