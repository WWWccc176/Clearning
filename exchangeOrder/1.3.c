#include <stdio.h>

int main(void) {
	printf("这是一个输入数字顺序的程序：\n");

	int in1, in2;

	printf("输入第1个数：");
	scanf_s("%d", &in1);
	printf("输入第2个数：");
	scanf_s("%d", &in2);

	int intermediate = in1;
	in1 = in2;
	in2 = intermediate;

	printf("这是第一个数：[%d]\n", in1);
	printf("这是第二个数：[%d]", in2);

}