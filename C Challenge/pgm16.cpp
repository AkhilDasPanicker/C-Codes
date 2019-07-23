#include <iostream>


class base
{
    public:
    
    int calc(int a, int b)
    {
        return a+b;
    }
};

class derive  : public base
{
    public:
    
    int calc(int a, int b)
    {
        return a*b;
    }
};


int main()
{
    int c;
    derive a = derive();
    c = a.calc(90,20);
    
    printf("The function has been invoked in the base class : result = %d",c);
}