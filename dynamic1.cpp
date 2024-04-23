#include<iostream>
#include<string>
using namespace std;
int main(){
cout<<"enter the value of the integer: ";
int input;
cin>>input;
int *bule = new int(input);

cout<<"enter the value of the string : ";
string anotherinput ;
cin>>anotherinput;
string *blessings = new string(anotherinput);

cout<<"The value of the enteger is "<<*bule <<endl;
cout<<"The value of the string is "<<*blessings <<endl;

return 0;
}