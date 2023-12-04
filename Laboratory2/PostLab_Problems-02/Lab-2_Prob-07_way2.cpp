//Write and run a C++ program to find the roots of a quadratic equation. The standard form of a quadratic
//equation is ax2 + bx + c = 0, where a, b, and c are real numbers and a ̸= 0 .
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, root1, root2;
    cout<<"Finding roots of a Quadratic Equation: ax^2+bx+c=0"<<endl;
    cout<<"Enter the coefficients a, b & c (USE SPACE to Separate)"<<endl;
    cin>> a >> b >>c ;
    cout << "The equation is:" <<a<<"x^2+"<<b<<"x+"<<c<<" = 0"<<endl;

    root1 = (-b + sqrt((b*b)-4*a*c))/2*a;   //using + positive
    root2 = (-b - sqrt((b*b)-4*a*c))/2*a;   //using - negative

    cout<<"The roots of this equation : "<< root1 <<" & " << root2 << endl;


}

