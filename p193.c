#include<stdio.h>
int main()
{
int max(int x,int y);
int a[10],m,n,i;
printf("enter ten integer numbers:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=1,m=a[0],n;i<10;i++)
{
	if(max(m,a[i])>m)

	{
		m=max(m,a[i]);
	n=i;
	}
}
printf("The largest nymber is %d\nit is the %dth number.\n",m,n+1);
}

int max(int x,int y)
{
	return(x>y?x:y);
}