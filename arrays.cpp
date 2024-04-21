#include <iostream>
#include <string>
using namespace std;

int main()
{ 
  //we create and array of 8 strings callled bule
string bule[8]={"B123","C234","A345","C15","B177","G3003","C235","B179" };
//we declaire a char variable called target here
 char target ='B';
 //in for loop we use the char variable we created to target strings that start with B and display them on the console
 for (int i = 0; i < 8; i++)
 { if (bule[i].at(0)==target)
   {
       cout<<bule[i] <<endl;
   }
 

 }
 

return 0;
}