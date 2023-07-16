//4. Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std ;

class Counter 
{
    private : 
        static int c ;
    public : 
        Counter ()
        {
            c++ ;
        }
        static void showCounter()
        {
            cout<<"Counter = "<<c<<endl ;
        }
};
int Counter :: c = 0 ;

int main ()
{
    Counter c1 ,c2 ,c3 , c4 ;
    Counter c5 ;
    Counter::showCounter() ;

    return 0 ;
}
