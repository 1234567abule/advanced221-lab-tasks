#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
 int main(){
    //creating random number named daysuntilexpire that should be between 0-11
  int y=time(0);
  srand(y);
  int daysuntilexpire = rand()%12;
  cout<<daysuntilexpire << endl;
//this switch tells the user the days remaining and what to do either to renew the subscription or not
  //it tells the user that the days are between 10 or less but more than 5
  switch (static_cast<int>(daysuntilexpire)){
   case 6:
   case 7:
   case 8:
   case 9:
   case 10:
  {
          cout<<" Your subscription will expire soon. Renew now!";
                  break;
  }
    //it tells the user that the days are between 5 or less but more than 1 day
  case 2:
  case 3:
  case 4:
  case 5:
  {
          cout<<"Your subscription expires in "<<daysuntilexpire <<endl;
          cout<<"Renew now and save 10%!"  <<   endl;
                break;
 }  //it tells the user that its only one  day
    case 1:
    {
         cout<<"Your subscription expires within a day!" <<endl;
         cout<<"    Renew now and save 20%!" <<endl;
               break;
     }
     //the subscription has expired and tells the user renew
     case 0:
     {
        cout<<"Your subscription has expired." <<endl;
              break;
     }
     //tells the user that his subcription is fine
     default:
     {
        cout<<"You have an active subscription." <<endl;
              break;
     }

}
  
return 0;
 }
