//
// Created by aykut on 17.10.16.
//
#include "iostream"

using namespace std;


// enums for colors
enum color { red, green, blue};

// declaring function for conversion from color to string
string colorString(enum color color);

// structure for a colored 2D-cartesian-point
struct point {
    int x;
    int y;
    enum color color;
    point(int xval, int yval, enum color colorval) :
            x(xval), y(yval), color(colorval) {}


    // function for printing a point by reference
    void printPoint() const{
        cout << "((" << this->x << ","<< this->y << "),"<< colorString(this->color) << ")" << endl;
    };
};



// defining function for conversion from color to string
string colorString(enum color color)
{
    switch (color) {
        case red:
            return "red";

        case green:
            return "green";

        case blue:
            return "blue";

        default:
            return "unknown color";
    }
}


int main(){

    point p1 = point(12,13,red);

    point p2 = { 11, 13, red };

    point *pp3 = &p1;

    point *pp4 = new point(12,13,red);

    p1.printPoint();

    point p5(p1);

}
