#include<stdio.h>
int main()
{
	char c[15]={'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','.'};
	int i;
	for(i=0;i<=14;i++)
	{
		printf("%c",c[i]);

	}
	printf("\n");
	return 0;
}

#include<stdio.h>
int main()
{
	char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
	int i,j;
	for(i=0;i<=4;i++)
	{
	for(j=0;j<=4;j++)
	{
		printf("%c",diamond[i][j]);
	}
		printf("\n");
	}
	printf("\n");
	return 0;
}

