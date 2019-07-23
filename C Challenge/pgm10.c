#include<stdio.h>


int main(void)
{
    int n;
    int i;
    int j;
    int temp;
    //int s;
    
    printf("\nEnter the number of elements in the array :");
    scanf("%d",&n);
    
    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element at position %d",i);
        scanf("%d",&a[i]);
    }
    
    printf("\nSorting the array :");
    //scanf("%d",&s);
     
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(a[i]<a[j])
             {
                 temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
             }
             
             else
                continue;
             
         }
     }
     
     
    printf("\nThe sorted array is \n"); 
    for(i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
     
return 0;
}