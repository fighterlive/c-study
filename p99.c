#include<stdio.h> //方法1
int main()
{
	char ch;
	scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')printf("ch=%c\n",ch+32);
	return 0;
}

#include<stdio.h> //方法2
int main()
{
	char ch;
	scanf("%c",&ch);
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;
	printf("ch=%c\n",ch);
	return 0;
}