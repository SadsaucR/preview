/*排除連續使用輸入函數所造成的錯誤*/
/*注意:fflush(stdin)於VS中無法使用，此處使用rewind(stdin)*/
#include<stdio.h>
#pragma warning (disable:4996)
void L1_6()
{
	int num;
	char ch;

	printf("請輸入一個整數: ");
	scanf("%d", &num);
	rewind(stdin); /*清除緩存區*/
	printf("請輸入一個字元: ");
	scanf("%c", &ch);
	printf("num=%d, ASCII of ch=%d\n", num, ch);
}