//4. Write and run a C++ program that converts any temperature from Celsius scale to Fahrenheit scale.

#include<iostream>
using namespace std;
int main()
{
    float fahren, cels;
    cout<<"Enter temperature in Celsius: ";
    cin>>cels;


    fahren = ((9*cels)/5)+32;     //as per formula

    cout<<"   Temperature in Fahrenheit : "<<fahren<<" °degree"<<endl;

    return 0;

}
