/*1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/

#include<iostream>
using namespace std ;

class complex
{
    private :
        int real , img ;
        
    public :
        complex ()
        {
            real = 0 ;
            img = 0 ;
        }
        void setData(int x,int y)
        {
            real = x ;
            img = y ;
        }
        void showData()
        {
            cout<<"Real="<<real<<" "<<"imag="<<img<<endl ; 
        }
        complex add(complex C)
        {
            complex temp ;
            temp.real = real+C.real ;
            temp.img = img+C.img ;
            return temp ; 
        }
        
} ;

int main ()
{
    complex c1,c2 ,c3;
    c1.setData(3,4) ;
    c2.setData(6,2);
    c1.showData() ;
    c2.showData();
    c3 = c1.add(c2) ;
    c3.showData() ;

}
