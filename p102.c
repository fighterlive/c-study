#include<stdio.h>
int main()
{
	char grade;
	scanf("%c",&grade);
	printf("Your score is:");
	switch(grade)  //���ӡ�;��
	{
	case'A':printf("85��100\n");break;
	case'B':printf("70��84\n");break;
	case'C':printf("60��69\n");break;
	case'D':printf("0��60\n");break;
	default:printf("enter data error!\n");//����break
	}
	return 0;
}