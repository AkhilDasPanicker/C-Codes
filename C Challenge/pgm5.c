#include <stdio.h>
#include <string.h>

int main(void) 
{
    char a[50];
    char g[50];
    int len;
    int i;
    int c;
    
	printf("\nEnter a string : ");
	scanf(" %s",a);
	
	len = strlen(a);
	c = len;
	len--;
	//printf("\n%d",len);
	
	for(i=0 ; i <= c; i++)
	{
	    g[i] = a[len];
	    len--;
	    
	}
	
	//strcpy(g,a);
	
	//strrev(g);
	
	if(strcmp(a,g)==0)
	    printf("\n%s is palindrome",a);
	else
	    printf("\n%s is not palindrome",a);
}

