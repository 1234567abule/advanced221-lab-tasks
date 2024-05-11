#include<iostream>
#include "header.h"

using namespace std;

int main(){
    //declaring floating variables
    float length;
    float width;
    // we begin by creating objects of the my class Rectangle
     Rectangle buleRectangle;
     //tell the User to enter values of length and width and it will set the values of to the member variables using access function set
     cout<<"Enter the  length: ";
     cin>>length; 
     cout<<endl;
     buleRectangle.setlength(length);
     cout<<"Enter the  width: ";
     cin>>width; 
     cout<<endl;
     buleRectangle.setwidth(width);

     
      //calling the member function findarea  to display the result of calculating area
     cout<<"Area of our rectangle is: "<<buleRectangle.findArea() <<endl ;

    return 0;
    }