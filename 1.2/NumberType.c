#include <stdio.h>

int main(void) {
	unsigned int Mincome = 0, Wincome = 0;
	unsigned Aincome = 0,Yincome =0;

	printf("请输入爸爸的收入:");
	scanf_s("%u", &Mincome);
	printf("请输入妈妈的收入:");
	scanf_s("%u", &Wincome);

	Aincome = Wincome + Mincome;
	Aincome = Aincome / 2;
	Yincome = Aincome * 24;
	printf("Man's income is: [%d]\nMan's income is: [%d]\nAverage income is: [%d]\nYear income is: [%d]", Mincome, Wincome, Aincome, Yincome);


	return 0;
}