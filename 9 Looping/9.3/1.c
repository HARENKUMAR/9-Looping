#include<stdio.h>
main()
{
	int rem,rev;
	int n=0;
	printf("enter any number: ");
	scanf("%d",&n);
	
	int pal = n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n = n / 10;
	}
	
	
		printf("rev: %d",rev);
		
		if(pal == rev)
		{
			printf("your number is palindrom");
		}
		else
		{
			printf("your number is not palindrom");
		}
}