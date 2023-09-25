/*更好用的字串輸入與輸出*/
/*gets、puts函數*/
#include<stdio.h>
void L1_7()
{
	char name[10];
	printf("請輸入名字: ");
	gets(name);
	printf("您好! ");
	puts(name);
}