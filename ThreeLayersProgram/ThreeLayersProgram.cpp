#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string username, pass;

    ifstream userFile("Data/Username.txt");
    if (userFile.is_open())
    {
        getline(userFile, username);
        userFile.close();
    }

    ifstream passFile("Data/Password.txt");
    if (passFile.is_open())
    {
        getline(passFile, pass);
        passFile.close();
    }

    string username2;
        string pass2;
    cout << "Username: ";
    getline(cin, username2);
    cout << "Password: ";
    getline(cin, pass2);

    if(username2 == username && pass2 == pass)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
