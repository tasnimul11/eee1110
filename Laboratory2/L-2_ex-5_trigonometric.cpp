//Some important TRIGONOMETRIC functions

#include<iostream>
#include<cmath> //as we used some trigono functions here, cmath header file is needed
using namespace std;
int main()

{
    double const pi=3.14159265359; //const to declare this as constant

    cout<< "cos(60) = "<< cos (60*pi/180)<<endl;
    cout<< "cos(30) = "<< cos (30*pi/180)<<endl;

    cout<< "sin(45) = "<< sin (45*pi/180)<<endl;
    cout<< "sin(90) = "<< sin (90*pi/180)<<endl;

    return 0;
}
