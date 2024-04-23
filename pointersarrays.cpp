#include<iostream>

using namespace std;

int main(){
int numberarray[5];
int* pPointer=nullptr;

pPointer =numberarray;
*pPointer=10;

pPointer++;
*pPointer=20;

pPointer=&numberarray[2];
*pPointer = 30;

pPointer =numberarray +3;
*pPointer =40;

pPointer =numberarray;

*(pPointer+4)= 50;

for(int n=0;n<5;n++){
    cout<< numberarray[n] <<"   ";
}
    return 0;
}