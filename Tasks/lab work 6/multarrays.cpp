#include <iostream>
#include <cstdlib>
#include<limits>
using namespace std;
int main() {
    int rows, columns;

    // tell user to enter the number of rows and columns
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

while (rows>3 || columns>3){

        cout<<"either row or column of of the has exceed 3  "<<endl;
        cout<<"try again less than 3 or equal to 3 "<<endl;
        cout << "Enter the number of rows: " ;
        cin>>rows;
        cout<<endl;
        cout << "Enter the number of columns: ";
        cin>>columns;
        cout<<endl;
            }

    // it should dynamically allocate memory for the 2D array
    int **array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[columns];
    }

    // after allocating it should then iniatilise the array elements
    int count = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            array[i][j] = count++;
        }
    }

    // should show the elements in 2D array cleate
    cout << "Our 2D array is: "<<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << array[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}
