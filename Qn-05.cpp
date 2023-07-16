/*5. Define a class Date and write a program to Display Date and initialise date object
using Constructors.*/

#include<iostream>
using namespace std ;

class Date
{
    private : 
        int d , m , y ;

    public : 
        Date (int a,int b,int c)
        {
            d = a ;
            m = b ;
            y = c ;
        }
        void display ()
        {
            cout<<"Day-"<<d<<" Month-"<<m<<" Year-"<<y<<endl ;
        }
        
} ;

int main ()
{
    Date d1(16,7,2023) , d2(20,4,2003);
    Date d3(31,12,2024) ;

    d1.display();
    d2.display();
    d3.display();
    
    return 0 ;
}
