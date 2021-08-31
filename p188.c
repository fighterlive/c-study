int fac(int n)
{
int c;
if(n<0)
printf("data error!");
else if(n==0||n==1)
c=1;
else
c=fac(n-1)*n;
return(c);
}



#include<stdio.h>
int main()
{
int fac(int n);
int n;
int y;
printf("input an integer number: ");
scanf("%d",&n);
y=fac(n);
printf("%d!=%d\n",n,y);
return 0;
}