//while��do...while�Ĳ�ͬ
#include<stdio.h>   //while
int main()
{
int sum=0,i=1;
printf("please enter i,i=?");
scanf("%d",&i);
while(i<=10)
{
sum=sum+i;
i++;
}
printf("sum=%d\n",sum);
return 0;
}



#include<stdio.h>  //do...while
int main()
{
int sum=0,i=1;
printf("please enter i,i=?");
scanf("%d",&i);
do
{
sum=sum+i;
i++;
}
while(i<=10);
printf("sum=%d\n",sum);
return 0;
}

//��������whileִ�У�do...whileִ�й�һ��