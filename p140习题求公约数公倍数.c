#include<stdio.h>
int main()
{
float m,n,x,y,a,b,e,f,c,h; //x��m�ĳ�����y��n�ĳ�����a��m��������b��n������,c��n�ĳ�����d��m�ĳ���
printf("please enter two integer numbers:");//����С������
scanf("%f",&m);
printf("and");
scanf("%f",&n);
for(x=1;x<=n;x++)//m��С���������ж�
{
	a=m*x;
for(y=1;y<=m;y++)//n��С���������ж�
{
b=n*y;
if(a==b)break;
}
if(a==b)break;
}
printf("��С��������%f",a);
printf("\n");
for(e=1;e<=n;e++)//n���Լ���ж�
{
  c=n/e;
for(f=1;f<=m;f++)//m���Լ���ж�
{
	h=m/f;
	if(c==h)break;
}
if(c==h)break;
}
printf("���Լ����%f",c);
printf("\n");
return 0;
}