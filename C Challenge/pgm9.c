#include<stdio.h>


int main(void)
{
    int a[20];
    int i;
    int n;
    int s;
    int flag;

    
    printf("Enter the no of elements in the array :");
    scanf("%d",&n);

    for(i = 0; i < n; i++ )
    {
        printf("\nEnter the value for element in subscript %d  in the array :",i);
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter a number to search : ");
    scanf("%d",&s);
    
    for(i = 0; i < n; i++ )
    {
        if(a[i] == s)
        {
            printf("\nThe element is present at position %d",i);
            flag = 1;
            break;
        }
        else
            flag = 0 ;
        
    }
    
    if(flag == 0)
        printf("\nThe element is not present");
        
        return 0;

}