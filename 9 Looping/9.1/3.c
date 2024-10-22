#include<stdio.h>
main()
{
	int a,n;
	printf("enter a any number : ");
	scanf("%d",&n);
	
	do {
        if (a % 2 == 1)
		 {
            printf("%d ", a);
        }
        a++; 
    } while (a <= n);
}