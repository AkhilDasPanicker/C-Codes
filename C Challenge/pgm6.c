#include <stdio.h>
#include <string.h>

int main(void) 
{
    char a[50];
    int len;
    int i;
    int c=0;
    
	printf("\nEnter a string : ");
	scanf("%s",a);

//i = strlen(a);

for(i = 0; a[i]!='\0'; i++)
    {
        if(a[i] == 'a')
            c++;
    
    }


	    printf("\nThe no of characters 'a' in %s is %d",a,c);

}

