#include<stdio.h>


int main(void)
{
    int i, j, m, n, o, p, k;
    printf("\nEnter the dimensions of first array");
        scanf("%d",&m);
        scanf("%d",&n);
        
    int a[m][n];

    printf("\nEnter the dimensions of second array");
        scanf("%d",&o);
        scanf("%d",&p);  
        
    int b[o][p];
    
    int c[m][p];

    
    
    if(m == p )
    {
        
        printf("\nEnter the elements of the array one");
        
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("\nEnter the element at %d%d ",i,j);
                    scanf("%d",&a[i][j]);

                
            }
        }
        
        printf("\nThe elements of  Array 1 are:-\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<p; j++)
            {
                    printf("%d ",a[i][j]);
            }
            printf("\n");
        }
		
		
		printf("\n\nEnter the elements of the array 2");
        
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
            
                printf("\nEnter the element at %d%d ",i,j);
                    scanf("%d",&b[i][j]);    
                
            }
        }
    
    
    	printf("\nThe elements of  Array 2 are:-\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<p; j++)
            {
                    printf("%d ",b[i][j]);
            }
            printf("\n");
        }
    
    
        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                    c[i][j] = 0;
            }
        }
        
        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                for(k=0; k<m ; k++)
                {
                c[i][j] = c[i][j]+ (a[i][k] * b[k][j]);
                }
            }
            printf("\n");
        }
        
		
		printf("\nThe elements of Derived Array are:-\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<p; j++)
            {
                    printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
        
    else
        printf("\nArray multiplication is not possible");
        
        return 0;

}