#include<stdio.h>
main()
{
	int rem,result,number;
	int n=0;
	printf("enter any number: ");
	scanf("%d",&n);
	
	int arm = n;
	while(n!=0)
	{
		=n%10;
		rev=rev*10+rem;
		n = n / 10;
		
	}

	
		printf("rev: %d",rev);
		
		if(arm == rev)
		{
			printf("%d your number is armstrong");
		}
		else
		{
			printf("%d your number is not armstrong");
		}
}