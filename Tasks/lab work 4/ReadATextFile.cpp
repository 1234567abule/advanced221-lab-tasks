#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;
    ifstream myfile("example.txt"); //i Changed it from ofstream to ifstream because it was giving errors but this one its working so better that its working atlest the same iyah

    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            cout << line << '\n';
        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }

    return 0;
}
