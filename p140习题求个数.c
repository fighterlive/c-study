#include<stdio.h>
int main()
{
	char c;
int letters=0,space=0,digit=0,other=0;
printf("������һ���ַ���");
while((c=getchar())!='\n')
{
	if(((c>='a')&&(c<='z'))||((c<='A')&&(c>='Z')))
	letters++;
else if((c>='0')&&(c<='9'))
digit++;
else if(c==' ')
	space++;
else
other++;
	
}
printf("Ӣ����ĸ����%d�ո�����%d��������%d�����ַ�����%d",letters,space,digit,other);
printf("\n");
return 0;
}