/*scanf函數的使用，及轉換大小寫ASCII碼應用。*/
#include<stdio.h> /*scanf函數於此標頭中*/
void L1_4()
{
	int num;
	printf("請輸入一個小寫字母");
	scanf_s("%c", &num); /*非陣列num需使用&指向*/
	printf("%c的大寫為%c", num, num - 32);
}