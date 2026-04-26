#include <iostream>
#include <string>


using namespace std;

int main {
    
    string username = "admin"; 
    string password = "password"; 

    cout << "Welcome to your extremely secure authentication system!" << endl;
    cout << "Please enter your username: ";
    string inputUsername;
    cin >> inputUsername;
    cout << "Please enter your password: ";
    string inputPassword;
    cin >> inputPassword;

    if (inputUsername == username && inputPassword == password) {
        cout << "Authentication successful! Welcome, " << username << "!" << endl;
    } else {
        cout << "Authentication failed! Please try again." << endl;
    }

    


    return 0;
}