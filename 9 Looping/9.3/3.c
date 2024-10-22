#include<stdio.h>

int main()
{
	int a,n;
	printf("enter a any value : ");
	scanf("%d",&n);
	
	for(a=1; a<=10; a++)
	{
	
	printf("%d*%d=%d\n",n,a,n*a);

	}
}