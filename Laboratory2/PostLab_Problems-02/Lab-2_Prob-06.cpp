// Write and run a C++ program to calculate the distance between
//two co-ordinates (x1, y1) and (x2, y2) of a two dimensional graph.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, x2, y1, y2, distance;

    cout<<"Use SPACE to separate absicca(x) & ordinate(y) in one co-ordinate"<<endl;

    cout<<"Input the first co ordinate(x1, y1): ";
    cin>> x1>> y1;  //be careful taking inputs, 1st is x; 2nd is y

    cout<<"Input the second co ordinate(x2, y2): ";
    cin>> x2 >> y2;

    distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2)); //the formula

    cout<<"Distance between the two co-ordinates: "<< distance <<endl;

    return 0;
}
