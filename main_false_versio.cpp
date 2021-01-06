#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <string>

using namespace std;
class point
{
    int x,y;
    string name_point;


public:

    void setvalues(int a ,int b , string s)
    {
      x=a;
      y=b;
      name_point=s;

    }
    void show_values()
    {
        cout << name_point << endl;
        cout << x << endl;
        cout << y << endl;
    }

    int distance_between_points(point a, point b)
    {
        int c = a.x - b.x;
        int d = a.y - b.y;
        int h = hypot(c, d); // calculates the distance between the 2 points
        return h;
    }
};

void string_print(vector<point> v1, vector<point> v2)
{
}

int main()
{
    int number;
    cout << "enter the number of points" << endl;
    cin >> number;
    // vector<int> v1;
    // vector<int> v2;
    // string point_names;
    // cout << "enter the points in format    pointName x y " << endl
    //      << flush;   //flush forces the printing to the screen before it pauses
    // system("PAUSE"); //pause displays a message and waits for the user to hit a key
    // int index = 0;

    // for (int i = 0; i < number * 3; i++)
    // { //splits the coordinates into x and y vector array;
    //     int a, b;
    //     cin >> point_names[index], a, b;
    //     v1.push_back(a);
    //     v2.push_back(b);
    // }

    vector<point> arr;
    cout << "enter points in the format => point_name x y " << endl;
    int a , b;
     string s;
    for (int i = 0; i < number; i++)
    {
       cout <<"enter the name "<< endl;

       cin>> s;
       cout<<"enter the x val"<< endl;
       cin >> a;
       cout << "enter the y val"<< endl;
       cin >> b;
    arr[i].setvalues(a,b,s);
    

    }

    system("CLS");

    for (int i = 0; i < number; i++)
    {
        arr[i].show_values();
        cout << '\n';
    }
    //example
    return 0;
}