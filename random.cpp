#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //we are generating random numbers and everytime we execute should give us new numbers
    int x = time(0);
     srand(x);
    int daysuntilexpire= 0 + rand()%12 ;
    cout<<daysuntilexpire <<endl;
    int i =daysuntilexpire;
//checking the number of days remaining and  and telling the user what he or she should do ...renew or not
    if (daysuntilexpire <=10 && daysuntilexpire >5)
    {
        cout<<" Your subscription will expire soon. Renew now!" <<endl;
    }
    else if (daysuntilexpire <=5  && daysuntilexpire >=2 )
          {     
           cout <<"Your subscription expires in " << daysuntilexpire <<endl;
           cout << "       Renew now and save 10%!";
           }
           else if(daysuntilexpire==1)
           {
            cout<<"Your subscription expires within a day!" <<endl;
            cout <<"Renew now and save 20%!";
           }

           else if(daysuntilexpire==0)
            {cout<<"Your subscription has expired";}

            else{
                cout<<"You have an active subscription.";
            }
            
    
    


    return 0;
}
