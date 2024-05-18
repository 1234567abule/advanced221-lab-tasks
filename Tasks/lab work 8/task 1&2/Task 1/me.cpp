#include <iostream>

using namespace std;

int main(){
    int bule=100,brian=10;

    int& man =bule;
    cout<<man;
    man=brian;
    cout<<endl;
    cout<<bule;



    return 0;
}