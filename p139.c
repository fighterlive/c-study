#include<stdio.h>  //方法1
int main()
{
 char c;
 
 while((c=getchar())!='\n')
 {
	 if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
	 {
	 if((c>='W'&&c<='Z')||(c>='w'&&c<='z'))
	 {
	 c=c-22;
	 }
	 else
	 {
		 c=c+4;
	 }
	 } 
	  printf("%c",c);
 }
printf("\n");
return 0;
}

#include<stdio.h> //方法2
int main()
{
 char c;
 c=getchar();
 while(c!='\n')
 {
	 if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
	 {
	 if((c>='W'&&c<='Z')||(c>='w'&&c<='z'))
	 {
	 c=c-22;
	 }
	 else
	 {
		 c=c+4;
	 }
	 } 
	  printf("%c",c);
	  c=getchar();
 }
printf("\n");
return 0;
}
