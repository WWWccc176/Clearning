#include <stdio.h>

int main(void) {
	printf("����һ����������˳��ĳ���\n");

	int in1, in2;

	printf("�����1������");
	scanf_s("%d", &in1);
	printf("�����2������");
	scanf_s("%d", &in2);

	int intermediate = in1;
	in1 = in2;
	in2 = intermediate;

	printf("���ǵ�һ������[%d]\n", in1);
	printf("���ǵڶ�������[%d]", in2);

}