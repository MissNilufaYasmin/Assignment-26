/*6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.*/

#include<iostream>
#include<string.h>
using namespace std ;

class Student
{
    private : 
        int id ;
        char section ;
        char name [20] ;

    public : 
        Student()
        {

        }
        Student (int i , char s)
        {
            id = i ;
            section = s ;
            strcpy(name ,"yasmin") ;
        }
        Student (int i , char s , char n[] )
        {
            id = i ;
            section = s ;
            strcpy(name,n) ;
        }

        void setData()
        {
            cout<<endl<<"Enter id , section , name of a student : "<<endl;
            cin>>id ;
            cin>>section ;
            cin.ignore() ;
            cin.getline(name,20) ; 
        }
        void Display()
        {
            cout<<"Id-"<<id<<", Section-"<<section<<", Name-"<<name <<endl ;
        }
} ;

int main ()
{
    Student s1(1,'A') ;
    s1.Display() ;

    Student s2 ;
    s2.setData() ;
    s2.Display() ;

    Student s3(3,'C',"nilufa");
    s3.Display() ;
    
    return 0 ;
}
