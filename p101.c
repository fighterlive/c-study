//����1
#include<stdio.h>
int main()
{
int x,y;
scanf("%d",&x);
if(x<0)
y=-1;
else
if(x==0)  //if�ڵ��ڷ�����'=='

y=0;
else
y=1;
printf("y=%d\n",y);
return 0;
}

//����2
#include<stdio.h>
int main()
{
int x,y;
scanf("%d",&x);
if(x<0)
y=-1;
if(x==0)
y=0;
else
y=1;
printf("y=%d\n",y);
return 0;
}