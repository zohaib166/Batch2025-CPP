#include <iostream>
#include <string>
using namespace std;

int main()
{
    int rollNo;
    string studentName;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Full Name: ";
    getline(cin, studentName);

    cout << "Roll: " << rollNo << ", Name: " << studentName << endl;
}