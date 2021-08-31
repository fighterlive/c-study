int age(int a) //if(a==1)
{                //c=10;
int c;          //else
c=10+2*(a-1);   //c=age(a-1)+2;
return(c);      //return(c);
}

#include<stdio.h>
int main()
{
int age(int a);
int a;
printf("NO.5 age:%d\n",age(5));
return 0;
}