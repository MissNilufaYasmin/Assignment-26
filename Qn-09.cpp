/*9.Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.
*/

#include<iostream>
using namespace std ;

class Bill
{
    private : 
        int u ;
        float total ;
        int cus_no ;
        char cus_name[20] ;

    public : 
        
        void get()
        {
            cout<<"Enter details of customer : "<<endl ;
            cout<<endl<<"Enter customer no : ";
            cin>>cus_no ;
            cin.ignore() ;
            cout<<"Enter customer name : ";
            cin.getline(cus_name,20) ;
            cout<<endl ;
            cout<<"Enter Used of units : " ;
            cin>>u;
            cout<<endl ;
        }
        float Cal_Bill()
        {  
            if(u<=100)
                return total = u*1.20 ;

            else if (u<=200)
                return total = (100*1.2)+((u-100)*2) ;

            else if (u>200)
                return total = (100*1.2)+(100*2)+((u-100-100)*3) ;
        }
        void display ()
        {
            cout<<endl<<"Total Electric Bill - "<<total<<endl ;
        }
        
} ;

int main ()
{
    Bill customer1;
    customer1.get() ;
    customer1.Cal_Bill();
    customer1.display() ;
    return 0 ;
}
