/*2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/

#include<iostream>
using namespace std ;

class Time 
{
    private : 
        int h,m,s ;
    public :
        void setData(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void showData ()
        {
            cout<<"Hrs-"<<h<<" min-"<<m<<" sec-"<<s<<endl ;
        }
        void normalized()
        {
            m = m+s/60 ;
            s = s%60 ;
            h = h+m/60 ;
            m = m%60 ;
        }
        Time add (Time t)
        {
            Time temp ;
            temp.h = h + t.h ;
            temp.m = m + t.m ;
            temp.s = s + t.s ;
            temp.normalized() ;
            return temp ;
        }
} ;

int main ()
{
    Time t1,t2,t3 ;

    t1.setData(9,31,45);
    t1.showData();

    t2.setData(3,9,18) ;
    t2.showData() ;

    t3 = t1.add(t2) ;
    t3.showData() ;

    return 0 ;
}
