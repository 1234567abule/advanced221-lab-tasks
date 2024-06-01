#include <iostream>
#include "Person.h"
//now this is the main program running the person class we created the header and the implementation .cpp file
using namespace std;

int main(){

    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    float totalweight = Jane + John;

    cout<<"Total weight: "<<totalweight<<endl;

    return 0;
}