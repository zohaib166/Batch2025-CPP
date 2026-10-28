#include <iostream>
using namespace std;

class Ball
{
    string color;
    static int count;
public:
    Ball() {
        count++;
    }
    Ball(string color) {
        this->color = color;
        count++;
    }

    void setColor(string color) {
        this->color = color;
    }

    string getColor() {
        return color;
    }

    static int getBallCount() {
        return count;
    }
};

int Ball::count = 0;

int main()
{
    Ball a1("Red");
    Ball a2("White");
    Ball b[2];
    b[0].setColor("Blue");
    b[1].setColor("Green");

    cout << Ball::getBallCount() << endl;
}