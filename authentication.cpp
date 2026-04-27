#include <iostream>
#include <cstring>
#include <cstdio>


using namespace std; //General bad practice

int main() {
    
    char username[] = "admin"; //Vulnerability: Hardcoded Credentials
    char password[] = "password"; 
    char secretthirdthing[] = "This is an unused variable"; //Vulnerability: Dead Code
    
    char inputUsername[10];
    char inputPassword[10];

    cout << "Welcome to your extremely secure authentication system!" << endl;
    
    cout << "Please enter your username: ";
    scanf("%s", inputUsername); //Vulnerability: Buffer Overflow
    cout << "Please enter your password: ";
    scanf("%s", inputPassword); //Vulnerability: Buffer Overflow

    if (inputUsername == username && inputPassword == password) {
        cout << "Authentication successful! Welcome, " << username << "!" << endl;
    } else {
        cout << "Authentication failed! Please try again." << endl;
    }


    


    return 0;
}