#include <iostream>
using namespace std;

class complex
{
public:
    double real, imag;
    void init(double r, double i)
    {
        real = r;
        imag = i;
    }
    void print()
    {
        cout << real << "+i" << imag;
    }
};

int main()
{
    complex c;
    c.init(3, -4);
    c.print();
}