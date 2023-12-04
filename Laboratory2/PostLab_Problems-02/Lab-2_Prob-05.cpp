//Write and run a C++ program to calculate the hypotenuse a right
//triangle from the given length of two legs

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float leg1, leg2, hypo;
    cout<<"I'll calculate the hypotenuse length"<<endl;
    cout<<"Please input 1st leg length: ";
    cin>> leg1;
    cout<<"Please input 2nd leg length: ";
    cin>> leg2;

    hypo = sqrt(pow(leg1, 2)+pow(leg2, 2));

    cout<<"The hypotenuse length is: "<< hypo <<endl;

    return 0;
}
