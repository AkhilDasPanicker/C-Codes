#include<stdio.h>



int calc(int a, int b)
{
    
    return a+b;
}


int calc(int a, int b, int c)
{
    
    return a+b+c;
}


char calc(int a)
{
    
    if(a>90)
        return 'A';
    else
        return 'B';
}


int main()
{
    int a, b;
    char g;
    
    a = calc(90,40,60);
    
    b = calc(50,20);
    
    g = calc(b);
    
    
    printf("\nThe values are : sum1 : %d sum2: %d grade: %c\n",a,b,g);
    
    return 0;
}




