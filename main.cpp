#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <string>
#include"point.hpp"
#include"point_print.hpp"
using namespace std;

int main()
{
    
    vector<point> array;
    cout << "enter the number of points " << endl;
    int number;
    cin >> number;
    cout << "enter points in the format => point_name x y " << endl;

    for (int i = 0; i < number; i++)
    { 

        int a, b;
        string s;
        cin >> s;
        cin >> a;
        cin >> b;


        point defau(a,b,s);

        array.push_back(defau);


    }





    system("CLS");


    for(int i =0;i<number;i++){
        array[i].showPoint();
            }


    ListOfPoints(array);
    

    //example
    return 0;
}