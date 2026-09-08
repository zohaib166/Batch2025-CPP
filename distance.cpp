#include <iostream>
#include <cmath>
using namespace std;

double find_dist(double x1, double y1, double x2, double y2)
{
    double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return dist;
}

int main()
{
    double x1, y1, x2, y2, dist;
    cout << "Enter the first point (x1 and y1 separated by space)" << endl;
    cin >> x1 >> y1;
    cout << "Enter the second point (x2 and y2 separated by space)" << endl;
    cin >> x2 >> y2;
    // call function
    double dist = find_dist(x1, y1, x2, y2);
    cout << "The distance is: " << dist << endl;
    cout << "Total Size: " << sizeof(x1) + sizeof(x2) + sizeof(y1) + sizeof(y2) + sizeof(dist) << endl;
    return 0;
}