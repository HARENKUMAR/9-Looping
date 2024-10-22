#include<stdio.h>
main()
{
	int a=1;
	heading:
		if( a<=10)
		{
		printf("%d\t welcome to the new world!!..\n",a);
		a++;

		}	
		goto heading; 
}