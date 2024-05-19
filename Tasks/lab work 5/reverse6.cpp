#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileData;
    ifstream file("file.txt");
 //it will open the file and assign the content in the .txt file into  filedata  variable  then close using the file.close() function
    if (file.is_open()) {
        getline(file, fileData);
        file.close();

        int vowelCount = 0;
        int wordCount = 0;
//the program will check the vowels and count them  in the variable vowelcount variable declaire above
        for (char ch : fileData) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowelCount++;
            }
  ///it  should count the number of words in the filedata variable
            if (isspace(ch)) {
                wordCount++;
            }
        }
//it should display the number of vowels and word count
        cout << "Number of vowels: " << vowelCount << endl;
        cout << "Number of words: " << wordCount + 1 << endl;
//using the reverse function to reverse the filedata variable
        string reversedStatement(fileData.rbegin(), fileData.rend());
        cout << "Reversed statement: " << reversedStatement << endl;

        for (int i = 0; i < fileData.size(); ++i) {
            if (i % 2 == 1) {
                fileData[i] = toupper(fileData[i]);
            }
        }//it will capitalise the second letter of word in each word
        cout << "Capitalized second letter: " << fileData << endl;

    } 
    //if the file failed to open it will display the that it wasnt able to open
    else {
        cerr << "Unable to open file." << endl;
    }

    return 0;
}