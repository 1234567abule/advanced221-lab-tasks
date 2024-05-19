#include <iostream>
using namespace std;

int main(){
 int x=3;

//y is increased before the values of x is assigned to y
int  y=++x;
cout<<"x :"<< x <<endl;
cout<<"y :"<< y <<endl;

return 0;
}