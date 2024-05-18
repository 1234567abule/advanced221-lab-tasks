#include<iostream>
using namespace std;

int main(){
    int a=21;
    int b=10;
    int c;

    c=a+b;
    cout<<"Line 1-value of c is :" <<c <<endl;
     
     c=a-b;
     cout<<"Line 2-values of c is :"<<c <<endl;
     c=a*b;
     cout<<"Line 3 - value of c is :"<<c <<endl;
    
     c=a/b;
     cout<<"Line 4 -Value of c is :"<<c <<endl;

     c=a % b ;
     cout<<"Line 5- Value of c is :"<<c <<endl;

     c=a++;
     cout<<"Line 6-Value of c is :"<<c <<endl;

     c=a--;
     cout<<"Line 7-value of c is :"<<c <<endl;

     return 0;
    
    }