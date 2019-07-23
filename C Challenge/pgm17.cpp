#include<iostream>
using namespace std; 


class Complex
{
    public:
    
    int real, imaginary;
    
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }
    
    
    
    Complex operator + (Complex const &obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imaginary = imaginary + obj.imaginary;
        
        return result;
    }
    
    void display()
    {
        cout<<"\n\n"<<real<<" + "<< imaginary<<"i"<<"\n";
    }
};


int main() 
{ 
    int a, b, c, d;
    
    cout<<"Enter Real part of 1st number\n";
    cin>>a;
    cout<<"Enter imaginary part of 1st number\n";
    cin>>b;
    cout<<"Enter Real part of 2nd number\n";
    cin>>c;
    cout<<"Enter imaginary part of 2nd number\n";
    cin>>d;
    
    Complex c1(a, b), c2(c, d); 
    Complex c3 = c1 + c2;
    c3.display(); 
} 