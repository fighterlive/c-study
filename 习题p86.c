#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,disc,x1,x2,p,q,h;
scanf("%lf%lf%lf",&a,&b,&c);
h=b*b-4*a*c;  //不能用4ac，要加*
if(h<0)       //if,else后不加';'
 printf("方程无实根\n");
else
{
disc=sqrt(b*b-4*a*c);
p=-b/(2*a);
q=disc/(2*a);
x1=p+q;
x2=p-q;
printf("有实根\nx1=%7.2lf\nx2=%7.2lf\n",x1,x2);
} 
return 0;
}
