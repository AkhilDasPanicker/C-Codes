#include <stdio.h>

int main(void) 
{
    //int a = 5;
    int j, i, c = 4;
    
  for(j = 1 ; j <=100 ; j++)
  {
	for(i = 2; i < j; i++)
	{
	    
	    if(j%i == 0)
	    {   
	       c = 0;
	    }
	}
	if(c != 0)
	    printf("\n %d is prime",j);
	c = 4;
  }	
	
	
	return 0;
}
