#include <stdio.h>


void callbyvalue(int a,int b)
{
    int temp;
    
    temp= a;
    a = b;
    b = temp;
    
    printf("call by value : Swapped values are :a= %d,b= %d",a,b);
    
}


void callbyref(int &a,int &b)
{
    int temp;
    
    temp= a;
    a = b;
    b = temp;

    
}

int main(void) 
{
 int a;
 int b;
 
 printf("\nEnter two numbers\n");
 scanf("%d",&a);
 scanf("%d",&b);
 printf("call by value : Swapped values are :a= %d,b= %d",a,b);
 callbyvalue(a,b);
 
 printf("call by value : Swapped values are :a= %d,b= %d",a,b);
 callbyref(a,b);
 printf("\ncall by ref : Swapped values are :a= %d,b= %d",a,b);

}

