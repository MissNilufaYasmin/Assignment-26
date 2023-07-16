//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std ;

class Cube
{   
    private : 
        int a , v ;
    public :
        Cube (int x)
        {
            a = x ;         // cube volume = length*width*height = a*a*a ;
        }
        void setData (int y)
        {
            a = y ;
        }
        void showData()
        {
            cout<<"a="<<a <<endl ;
        }
        void calVolume()
        {
            v = a*a*a ;
        }
        void showVolume()
        {
            cout<<"Volume of Cube of egde "<<a <<" is "<< v <<endl ;
        }

} ;

int main ()
{
    Cube c1(3) ,c2(5);

    c1.showData() ;
    c1.calVolume() ;
    c1.showVolume() ;

    c2.calVolume() ;
    c2.showVolume() ;

    return 0 ;
}
