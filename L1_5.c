/*str字串應用*/
#include<stdio.h>
#pragma warning(disable: 4996) /*VS中，scanf()無法正常使用，這串程式用於忽略此錯誤*/
void L1_5()
{
	char name[10]; /*定義字元陣列char[]*/
	
	printf("What's your name?: ");
	scanf("%s",name); /*name為陣列，因此不須加&*/
	printf("Hi! %s,How are you?",name);
}
