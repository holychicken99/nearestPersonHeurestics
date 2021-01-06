// contains the definition of the class and its methods
#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <string>

using namespace std;

class point
{

    int x, y;
    string name;

public:
    point(int a, int b, string s)
    {
        x = a;
        y = b;
        name = s;
    }
    void setvalues(int a, int b, string s)
    {
        x = a;
        y = b;
        name = s;
    }
    void showPoint()
    {

        cout << name << " "
             << "(" << x << ',' << y << ")" << endl;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    string getName(){
        return name;

    }
    
    friend int distance_between_2Points(point p1, point p2);
};

int distance_between_2Points(point p1, point p2)
{
    int x_diff = p1.x - p2.x;
    int y_diff = p1.y - p2.y;
    int hypo = hypot(x_diff, y_diff);
    return hypo;
}

#endif