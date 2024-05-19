#include<iostream>
#include<limits>
using namespace std;
//function that should be calculating the area of a triangle and it should result in a double data type
double triangle(double base ,double height)
{
    double area=0.5*base*height; 
return area;
}
////function that should be calculating the area of a lectangle and it should result in a double data type
double lectangle(double length ,double width){
    
    double area=length*width; 
return area;
}
//function that should be calculating the area of a square and it should result in a double data type
double square(double length ){
    double area=length*length; 
    return area;}

int main(){

    double input;
//It should ask the user to select which shape should be calculated or if he wants to exit
    cout<<"Please select the area of the shape to calculate"<<endl;
    cout<<endl;
    cout<<"1.Triangle"<<endl;
    cout<<"2.Rectangle"<<endl; 
    cout<<"3.Square"<<endl;
    cout<<"4.Quit program"<<endl;
    cout<<"Enter selection :" <<endl;
    cin>>input;
    cout<<endl;

    
    while (!(input==4)){
   //it will call the function of triangle and calculate 
    if(input==1){
         double height;
        cout<<"Enter the height of the triangle :"<<endl;
        cin>>height;
        
        double base;
        cout<<"Then enter the base: "<<endl;
        cin >>base;
        cout<<"the area is  : "<<triangle(base,height) <<endl;
    }
    //it will call function of lectangle and calculate its area
    else if(input==2){
        cout<<"Enter height and width : ";
          double height;
          double width;
          cout<<"start with height:" ;
          cin>>height;
          cout<<"Then enter width: ";
          cin>>width;
          cout<<"the area is  : "<<lectangle(height,width)<<endl;
    }
    //it will call function of square and calculate its area
     else if(input==3)
     {
          double length;
          cout<<"start with height:" ;
          cin>>length;
          cout<<"The area is : "<<square(length)<<endl;

        }
        //if the user entered and invalid input it will execute here
     else  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"your choice was  "<<input<< "  which is invalid  input"<<endl;
     cout<<"Please enter a valid input"<<endl;
     }
//after the excution it will ask the user to do it again the process untill he or she choose exit using the option 4
    cout<<"Please select the area of the shape to calculate"<<endl;
    cout<<endl;
    cout<<"1.Triangle"<<endl;
    cout<<"2.Rectangle"<<endl; 
    cout<<"3.Square"<<endl;
    cout<<"4.Quit program"<<endl;
    cout<<"Enter selection :" <<endl;
    cin>>input;
     
    }
    //the user has selected an option to exit and it terminate in the loop and exits
     cout<<"exiting";
    return 0;
    }  
