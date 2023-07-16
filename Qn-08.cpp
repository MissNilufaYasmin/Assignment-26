/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/

#include<iostream>
using namespace std ;

class Bank
{
    private : 
        int P,T ;
        int R ;
        float SI ;

    public : 
        Bank(int x,int y,int z)
        {
            P=x ;
            T=y ;
            R=z ;
        }
        void read()
        {
            cout<<"Principal Amount-"<<P<<", Time-"<<T<<", Rate-"<<R<<endl;
        }
        float cal_SI()
        {
            return SI=(P*T*R)/100 ;
        }
        void display()
        {
            cout<<"Smiple Interest - "<<SI<<endl ;
        }
        
} ;

int main ()
{
    Bank b1(2000,1,10);
    b1.read() ;
    b1.cal_SI() ;
    b1.display() ;
    return 0 ;
}
