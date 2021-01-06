#include <iostream>
#include "point.hpp"

void ListOfPoints(vector<point> vec1)
{
    // implement me
    cout << "drawing the points..." << endl;
    cout << '\n';
    char m[20][20];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {

            m[i][j] = '.';
        }
    }
    //cout << "formed the array"<<m[1][2] <<endl;
    m[0][0] = 'O';
    int rot = vec1.size();
    //cout << " the size of the array is"<< rot<<endl;

    int index = 0;
    cout << "----------------------> x increasing " << endl;
    cout << endl;

    for (int k = 0; k < rot; k++)
    {

        for (int i = 0; i < 20; i++)
        {

            for (int j = 0; j < 20; j++)
            {

                if (i == vec1[index].getX() && j == vec1[index].getY())
                {

                    m[i][j] = vec1[index].getName()[0];
                    index++;
                }
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {

            cout << m[i][j];
        }
        cout << "   | " << '\n';
    }
    cout << "                       v";
    cout << endl;
    cout << endl;

    cout << "                       increasing down ";
}
