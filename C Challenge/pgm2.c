#include<Stdio.h>


int main(void) 
{
    int a;
    int i;
    
	printf("\n Enter a number : ");
	scanf("%d", &a);
	
	for(i = 2; i < a; i++)
	{
	    
	    if(a%i == 0)
	    {   
	        i = 0;
	        break;
	    }
	}
	
	if(i == 0)
	    printf("\n %d is prime ", a);
	    
	else 
	    printf("\n %d is not prime",a);
	
	return 0;
}