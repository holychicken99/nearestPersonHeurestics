#include<iostream>
#include"tsp_solver.hpp"
#include<math.h>
#include"point.hpp"


using namespace std;
int main(){
point a(2,6,"o");
point b(2,2,"b");
point c(5,6,"p");
point t(0,0,"l");
point f(0,-1,"i");


vector<point> arra;
arra.push_back(b);
arra.push_back(a);
arra.push_back(c);
arra.push_back(t);

cout << index_return(arra,c);


//example
return 0;
}