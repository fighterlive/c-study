#include<stdio.h>
int main()
{
int *p1,*p2,p,a,b; //pºÍ*p¶¼¿É
printf("please enter two integer number:");
scanf("%d,%d",&a,&b);
p1=&a;
p2=&b;
if(a<b)
{
p=p1;
p1=p2;
p2=p;
}
printf("a=%d\nb=%d\n",a,b);
printf("max=%d\nmin=%d\n",*p1,*p2);
return 0;
}