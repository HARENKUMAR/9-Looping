#include<stdio.h>

main()
{
	int n ,a,sum=0;
	printf("enter any number : ");
	scanf("%d",&n);

	
	for(a=0; a<=n; a++)
	{
	  sum+=a;
	 printf("sum=%d\n",sum);
}
}