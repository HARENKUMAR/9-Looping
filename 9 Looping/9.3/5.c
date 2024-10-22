#include<stdio.h>
main()
{
	int n,factorial=1,a;
	printf("enter any value : ");
	scanf("%d",&n);
	
	
	for(a=1; a<=n; a++)
	
	factorial=factorial*a;
	printf("The Factorial of %d is %d\n",n,factorial);
	
	
}