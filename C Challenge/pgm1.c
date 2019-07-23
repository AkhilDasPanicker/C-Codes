#include <stdio.h>

int main(void) 
{

    int a;
    int c = 1;
    int temp;
    
    
    printf("\n Enter a number :");
    scanf("%d", &a);
    
    temp =a;
    
    while(a != 0)
    {
        c = c*a;
        a--;
    }
	
	printf("\n The factorial of %d is : %d",temp,c);
	return 0;
}

