#include<iostream>
using namespace std;

int main(){
int a=21;
int b=10;
int c;

if(a==b){
    cout<<"Line-1 a is equal to line-b"<<endl;
}
else{
    cout<<"Line-1 a is not equal to line-b"<<endl;
}
if(a<b){
cout<<"Line 2 a is less than b" <<endl;

}else{
   cout<< "Line 2 a is not less than b"<<endl;
}
if(a>b){
    cout<<"Line -3 a is greater than b" <<endl;
}
else{
    cout<<"Line -3 a is not greater than b" <<endl;
}
//changing the value of a and b
a=5;
b=20;

if (a<=b){
    cout<<"Line 4 a is either less than or equal to b"<<endl;

}
if(a>=b){
    cout<<"Line 5 a is either greater than or equal to b"<<endl;
}

    return 0;
}