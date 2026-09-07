#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    int addition = n * (n + 1) / 2;
    cout << "Sum of " << n << " natural numbers: " << addition << endl;
}