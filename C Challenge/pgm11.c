#include<stdio.h>


int main(void)
{
    int i, j, m, n, o, p;
    printf("\nEnter the dimensions of first array");
        scanf("%d",&m);
        scanf("%d",&n);
        
    int a[m][n];

    printf("\nEnter the dimensions of second array");
        scanf("%d",&o);
        scanf("%d",&p);  
        
    int b[o][p];
    
    int c[m][n];

    
    
    if(m == o && n == p )
    {
        
        printf("\nEnter the elements of the arrays");
        
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\nEnter the elements of the array one ");
                    scanf("%d",&a[i][j]);
                printf("\nEnter the elements of the array two ");
                    scanf("%d",&b[i][j]);    
                
            }
        }
    
        
        
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
        
    else
        printf("\naddition not possible");
        
        return 0;

}