#include<iostream>
int main()
{
float score;
scanf("%f",&score);
bool a,b;
a=score>=60;
b=score<=69;
if(a==true&&b==true)printf("This grade is C\n");
return 0;
}