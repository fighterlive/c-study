#include<stdio.h>
int main()
{
	char c;
int letters=0,space=0,digit=0,other=0;
printf("请输入一行字符：");
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
printf("英文字母数：%d空格数：%d数字数：%d其他字符数：%d",letters,space,digit,other);
printf("\n");
return 0;
}