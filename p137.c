# include<stdio.h>  //100��200������
# include<math.h>
int main()
{
int n,k,i,m=0;
for(n=101;n<=200;n=n+2)
{
k=sqrt(n);
for(i=2;i<=k;i++)
{
if(n%i==0)break;
}
if(i>=k+1)
{
	printf("%d ",n);
m=m+1;
}
if(m%10==0)
printf("\n");
}
printf("\n");
return 0;
}


#include<stdio.h>  //����Ƿ�Ϊ����
#include<math.h>
int main()
{
	int n,i,k;

	printf("please enter a integer number:n=?");
		scanf("%d",&n);
			k=sqrt(n);
	for(i=2;i<=k;i++)
	{
	if(n%i==0)break;
	}
	if(i<=k)
		printf("%d is not a prime number.\n",n);
	else 
	printf("%d is a prime number.\n",n);
return 0;
}

