#include<stdio.h>
int main()
{
int f(int n);
int i;
for(i=1;i<=5;i++)
{
printf("%d!=%d\n",i,f(i));
}
return 0;
}

int f(int n)
{
static int f=1;
f*=n;
return(f);
}

