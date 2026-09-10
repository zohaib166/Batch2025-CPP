#include <iostream>
#include <cmath>
using namespace std;

struct point
{
    double x, y;
    void set_x(double temp)
    {
        if (temp < 0)
        {
            cout << "Invalid value, assuming 1\n";
            x = 1; // default value 1
        }
        else
            x = temp;
    }
    void set_y(double temp)
    {
        if (temp < 0)
        {
            cout << "Invalid value, assuming 1\n";
            y = 1; // default value 1
        }
        else
            y = temp;
    }
};

int main()
{
    point p1, p2;
    p1.set_x(3);
    p1.set_y(5);

    p2.set_x(-7);
    p2.set_y(8);

    double dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    cout << dist;
    return 0;
}