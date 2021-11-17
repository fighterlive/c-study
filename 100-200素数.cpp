#include<iostream>
using namespace std;
int main( )
{
int i,j,k=0;
for(i=100;i<=200;i++)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
goto loop;
}
}
cout<<" "<<i;
k++;
if(k%5==0)
{
cout<<endl;
}
loop:;
}
return 0;
}