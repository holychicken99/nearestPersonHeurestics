#ifndef TSP_SOLVER

#define TSP_SOLVER
#define debug 1
#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <string>
#include "point.hpp"
using namespace std;

int index_return(vector<point> array, point current)
{ // this function is supposed to return the index of the point that is nearest to the current point

    int min = distance_between_2Points(array[0],current);
    int index = 0;

    for (int i = 0; i < array.size(); i++)
    {
        if (distance_between_2Points(array[i], current) <= min)
        {
            min = distance_between_2Points(array[i], current);

            index = i;
        }
    }
    return index;
}

void swap(point &p1,point &p2){
    point temp = p1;
    p1=p2;
    p2=temp;

}

void shortest_path(vector<point> array)
{
    int shortest_distance;

    string path = array[0].getName() + "->";
point current = array[0];// take the first element as the current element 
array.erase(array.begin());// deletes the first element from the array

    while (array.size() != 0)
    {

        
         
        int index = index_return(array, current);// return the index of the element that is shortest to the current element ;
        current=array[index];// replace the current with the element at index 
        path += array[index].getName() + "->";

        array.erase(array.begin()+index);//remove it from the array


        

        
        // forms the path string

        // removes the first element in the array;
    }


    cout << "\n the path to be traversed should be "<< path<<endl;
}

#endif