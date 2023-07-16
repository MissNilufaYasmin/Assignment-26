/*7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/

#include<iostream>
using namespace std ;

class Box
{
    private : 
        int l,b,w ;

    public : 
        Box()
        {
            l = 8 ;
            b = 9 ;
            w = 10 ;
        }
        Box (int l1 , char b1)
        {
            l= l1 ;
            b = b1 ;
            w = 5 ;
        }
        Box (int l2 , int b2 , int w2 )
        {
            l = l2 ;
            b = b2 ;
            w = w2 ;
        }
        int calVolume()
        {
            return l*b*w ;
        }
        void display()
        {
            cout<<"Volume="<<calVolume() ;
            cout<<" length="<<l<<" breadth="<<b<<" height="<<w<<endl ;
        }
        
} ;

int main ()
{
    Box b1(3,4) , b2 , b3(7,8,9) ;

    b1.display() ;
    b2.display() ;
    b3.display() ;
    return 0 ;
}
