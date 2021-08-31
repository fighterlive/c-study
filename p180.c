float add(float a,float b)
{
float c;
c=a+b;
return(c);
}

#include<stdio.h>
int main()
{
	float add(float a,float b);
float x,y,z;
printf("Please enter a and b:");
scanf("%f,%f",&x,&y);
z=add(x,y);
printf("sum is %f\n",z);
return 0;
}
