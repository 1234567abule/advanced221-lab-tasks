#include<iostream>
#include"header.h"

using namespace std;
//this is constructor
Rectangle::Rectangle(){
  length=0;
  width=0;
}
//this is a destructor
Rectangle::~Rectangle(){}
//member function of the class
float Rectangle:: getwidth(){
       return  width;
       }
float Rectangle::getlength(){
        return length;
       }

void Rectangle::setwidth(float widthvalue){
           width=widthvalue;
       }
void Rectangle::setlength(float lengthvalue){
           length=lengthvalue;
       }

 float Rectangle:: findArea()
      {
            return width * length ;

       }