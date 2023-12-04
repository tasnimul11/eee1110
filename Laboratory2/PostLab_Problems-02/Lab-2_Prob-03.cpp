//3. Write and run a C++ program that converts centimeters to inches.
//Hints: 1.0 cm = 0.393 inch.
#include<iostream>
using namespace std;

int main()
{
    float cent, inch;

    cout<<"Centimeter to Inch converter."<<endl<<endl;
    cout<<"Enter your value in centimeter: ";
    cin>> cent;

    inch = cent*0.3937;

    cout<<"Your value in INCH is : " << inch<<" inches"<<endl;

    return 0;

}

