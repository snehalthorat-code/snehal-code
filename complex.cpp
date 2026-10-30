#include<iostream>
using namespace std;
class Complex
{
    private:
    float real;
    float imag;
    public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(float r, float i)
    {
        real=r;
        imag=i;
    }
    ~Complex() {}
    void display(void)
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex add(Complex c)
    {
        float r=real+c.real;
        float i=imag+c.imag;
        return Complex(r,i);
    }
    Complex subtract(Complex c)
    {
        return Complex(real-c.real,imag-c.imag);
    }
    Complex multiply(Complex c)
    {
        float r=real*c.real-imag*c.imag;
        float i=real*c.imag+imag*c.real;
        return Complex(r,i);
    }
};
    int main()
    {
        Complex c1(6,3),c2(8,5);
        cout<<"1st number is:";
        c1.display();
        cout<<"2nd number is:";
        c2.display();
        Complex sum=c1.add(c2);
        cout<<"Addition is:";
        sum.display();
        Complex diff=c1.subtract(c2);
        cout<<"Difference is:";
        diff.display();
        Complex product=c1.multiply(c2);
        cout<<"Product is:";
        product.display();
        return 0;
    }
