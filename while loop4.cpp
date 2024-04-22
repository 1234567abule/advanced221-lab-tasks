#include <iostream>
#include<string>
#include<limits>
using namespace std;


int main() {
    //we declaire variables because we will use them in the program
    int input;
    bool uservalue=false;

    while(!uservalue){
        cout<<"Please enter an integer value between 5 and 10"<<endl;
        cin>>input;
        //if the user enters a datatype type that is not the recomanded one eg string it will enter in this if statement and the cin.clear &cin.ignore will clear ther error and tells the user to try again
        if(!input){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"sorry youve entered an invalid number.Please try again :"<<endl;
        }
        //if the user enter the correct datatype but wrong numbers it will tell him and tries again
        else if(input<5||input>10){
            cout<<"sorry youve entered an incorrect number.Please try again :"<<endl;
        }
        else{
            uservalue=true;
        }
    } 
    //the user now has entered a correct value and it has terminated in the while loop and tells the user that it has been accepted
    cout<<"your input value   "<<input<<" has been accepted"<<endl;
return 0;
}
