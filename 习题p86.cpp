#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,disc,x1,x2,p,q,h;
scanf("%lf%lf%lf",&a,&b,&c);
h=b*b-4*a*c;  //������4ac��Ҫ��*
if(h<0)       //if,else�󲻼�';'
 printf("������ʵ��\n");
else
{
disc=sqrt(b*b-4*a*c);
p=-b/(2*a);
q=disc/(2*a);
x1=p+q;
x2=p-q;
printf("��ʵ��\nx1=%7.2lf\nx2=%7.2lf\n",x1,x2);
} 
return 0;
}