#include<iostream>
#include<string>
using namespace std;
int main(){
    //user should enter an enteger
cout<<"enter the value of the integer: ";
int input;
cin>>input;
//int variable should be dynamically allocated memory and inialised
int *bule = new int(input);

cout<<"enter the value of the string : ";
string anotherinput ;
cin>>anotherinput;
//string variable should be dynamically allocated memory and inialised
string *blessings = new string(anotherinput);
//displaying variables that were dynamicaly allocated memory
cout<<"The value of the enteger is "<<*bule <<endl;
cout<<"The value of the string is "<<*blessings <<endl;

return 0;
}