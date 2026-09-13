#include <iostream>
#include <string>
using namespace std;

int main()
{
    int id;
    string name;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Full Name: ";
    getline(cin, name); // SKIPPED!!!

    cout << "ID: " << id << " | Name: [" << name << "]\n";
}