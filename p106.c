#include<stdio.h>  //if����1
int main()
{
int year,leap;
printf("enter year:");
scanf("%d",&year);
if(year%4!=0)
leap=0;
else if(year%100!=0)
leap=1;
else if(year%400!=0)
leap=0;
else
leap=1;
if(leap)
printf("%d is ",year);
else 
printf("%d is not ",year);
printf ("a leap year");
return 0;
}

#include<stdio.h> //if����2
int main()
{
int year,leap;
printf("enter year:");
scanf("%d",&year);
if(year%4==0) 
{
if(year%100==0)  
{
if(year%400==0)  
leap=1;
else 
leap=0;
}
else 
leap=1;
}
else
leap=0;
if(leap)
printf("%d is ",year);
else 
printf("%d is not ",year);
printf ("a leap year");
return 0;
}