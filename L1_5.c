/*str�r������*/
#include<stdio.h>
#pragma warning(disable: 4996) /*VS���Ascanf()�L�k���`�ϥΡA�o��{���Ω󩿲������~*/
void L1_5()
{
	char name[10]; /*�w�q�r���}�Cchar[]*/
	
	printf("What's your name?: ");
	scanf("%s",name); /*name���}�C�A�]�������[&*/
	printf("Hi! %s,How are you?",name);
}
