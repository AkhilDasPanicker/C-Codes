#include<stdio.h>


void main()
{
    int a[20];
    int i;
    int c = 0;
    
    for(i = 0; i < 10; i++ )
    {
        printf("\nEnter the value for %d elements in the array :");
        scanf("%d",&a[i]);
    }
    
    for(i = 0; i < 10; i++ )
    {
        c = c + a[i]; 
        
    }
    
            printf("\nThe sum of first 10 elements in the array : %d",c);

}