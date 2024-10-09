#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

void registeruser(){
    string username;
    string password;

    // Input to register username
    cout << "Please input Username: ";
    cin >> username;
    
    // Input to register password
    cout << "Please input password: ";
    cin >> password;

    // File object and open file
    ofstream file;
    file.open("/Users/kieranpritchard/Documents/Coding Projects/C++ Projects/User Registration System/res/test.csv", ios::app);

    // Writes the new username and password to the file
    file << username << "," << password << '\n';
    file.close();
}

bool loginuser(){
    string username; 
    string un;
    string password; 
    string pw;

    // Input to login username
    cout << "Please input Username: ";
    cin >> username;
    
    // Input to login password
    cout << "Please input password: ";
    cin >> password;

    // File object to read from
    ifstream file("/Users/kieranpritchard/Documents/Coding Projects/C++ Projects/User Registration System/res/test.csv");
    
    // Checks if the file is open
    if (!file.is_open()) {
        cout << "Error opening file" << endl;
        return false;
    }

    // While loop checks through each line
    string line;
    while(getline(file,line)){
        stringstream ss(line);
        getline(ss, un, ',');
        getline(ss, pw, ',');

        // Checks if username and passsword is correct
        if(un == username && pw == password){
            cout << "Login Successful" << endl;
            file.close();
            return true;           
        }

    }
    // Output if false
    cout << "Invaild User" << endl; 
    file.close();
    return false;
}

int main(){
    // input to choose what the user wants to do
    int choice;
    cout << "(1.) Register User \n(2.) Login User \n(3.) Quit \nPlease Select Your Option: ";
    cin >> choice;

    // switch statement to activite each function
    switch (choice){
    case 1:
        registeruser();       
        break;
    case 2:
        loginuser();
        break;
    case 3:
        break; 
    default:
        break;
    }
}