/*scanf��ƪ��ϥΡA���ഫ�j�p�gASCII�X���ΡC*/
#include<stdio.h> /*scanf��Ʃ󦹼��Y��*/
void L1_4()
{
	int num;
	printf("�п�J�@�Ӥp�g�r��");
	scanf_s("%c", &num); /*�D�}�Cnum�ݨϥ�&���V*/
	printf("%c���j�g��%c", num, num - 32);
}