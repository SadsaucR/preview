#include<stdio.h>
void L1_3()
{
	printf("整數int佔了%d個位元組\n", sizeof(int));
	printf("浮點數float佔了%d個位元組\n", sizeof(float));
	printf("長整數long佔了%d個位元組\n", sizeof(long));
	printf("短整數short佔了%d個位元組\n", sizeof(short));
	printf("字元char佔了%d個位元組\n", sizeof(char));
}
/*sizeof()函數:統計目標資料所佔位元組大小*/