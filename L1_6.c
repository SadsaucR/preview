/*�ư��s��ϥο�J��Ʃҳy�������~*/
/*�`�N:fflush(stdin)��VS���L�k�ϥΡA���B�ϥ�rewind(stdin)*/
#include<stdio.h>
#pragma warning (disable:4996)
void L1_6()
{
	int num;
	char ch;

	printf("�п�J�@�Ӿ��: ");
	scanf("%d", &num);
	rewind(stdin); /*�M���w�s��*/
	printf("�п�J�@�Ӧr��: ");
	scanf("%c", &ch);
	printf("num=%d, ASCII of ch=%d\n", num, ch);
}