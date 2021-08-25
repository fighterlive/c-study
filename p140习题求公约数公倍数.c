#include<stdio.h>
int main()
{
float m,n,x,y,a,b,e,f,c,h; //x是m的乘数，y是n的乘数，a是m所得数，b是n所得数,c是n的乘数，d是m的乘数
printf("please enter two integer numbers:");//求最小公倍数
scanf("%f",&m);
printf("and");
scanf("%f",&n);
for(x=1;x<=n;x++)//m最小公倍数的判断
{
	a=m*x;
for(y=1;y<=m;y++)//n最小公倍数的判断
{
b=n*y;
if(a==b)break;
}
if(a==b)break;
}
printf("最小公倍数是%f",a);
printf("\n");
for(e=1;e<=n;e++)//n最大公约数判断
{
  c=n/e;
for(f=1;f<=m;f++)//m最大公约数判断
{
	h=m/f;
	if(c==h)break;
}
if(c==h)break;
}
printf("最大公约数是%f",c);
printf("\n");
return 0;
}