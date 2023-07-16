/*10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/

#include<iostream>
using namespace std ;

class StaticCount
{
    private : 
        static int c ;

    public : 
    int increment()
    {
        return c++ ;
    }
    void display()
    {
        cout<<"Result="<<increment() ;
    }
    
        
} ;
int StaticCount :: c ;

int main ()
{
    StaticCount a,b;
    a.increment() ;
    a.increment() ;
    b.increment() ;

    a.display() ;
    return 0 ;
}
