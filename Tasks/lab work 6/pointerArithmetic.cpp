#include<iostream>
using namespace std;

int main(){



//null pointer
int*pPointer=nullptr;

int numberArray[3]={10,20,30};

//assign address of first elementt to pointer
pPointer=numberArray;

//output the address of the first element
cout<<"Address as pPointer : " <<pPointer <<endl;
cout<<"Address of numberArray[0] :"<<numberArray <<endl;

//output the value of the first element using the pointer and indirection
cout<<"value at pPointer : "<< *(pPointer) <<endl;
//output of the second element
cout<<"value at ++pPointer : "<< *(++pPointer) <<endl;
//assign address of the first element to pPointer
pPointer=numberArray;

//outputs the fist element
cout<<"value at pPointer++ :" <<*(pPointer++)<<endl;

return 0;



}