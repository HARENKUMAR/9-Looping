#include<stdio.h>

int main()
 {
    int n, first = 0, second = 1, next;

    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int a = 1; a <= n; a++) 
	{
        if (a == 1)
		 {
            printf("%d ", first); 
            
        }
        if (a == 2) 
		{
            printf("%d ", second); 
            
        }
        next = first + second; 
        printf("%d ", next);

        first = second; 
        second = next;
    }
}

