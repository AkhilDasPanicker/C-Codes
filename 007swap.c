#include<stdio.h>


int main()
{
	int a;
	int b;	
	
	printf("\nEnter 1st Number : ");
	scanf("%d",&a);
	printf("\nEnter 2nd Number : ");
	scanf("%d",&b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\n\nAfter swapping, 1st Number : %d",a);
	printf("\nAfter swapping, 2nd Number : %d\n\n",b);


 return 0 ;	
}
