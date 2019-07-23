#include <stdio.h>


int factorial(int f)
{
    if(f == 1)
        return 1;
        
    else
    {
        f = f * factorial(f-1);
    }
    return f;
   
}



int main() 
{
    int a;
    int c;

    printf("\n Enter a number :");
    scanf("%d", &a);
    
    c = factorial(a);

	printf("\n The factorial of %d is : %d",a,c);
	return 0;
}




