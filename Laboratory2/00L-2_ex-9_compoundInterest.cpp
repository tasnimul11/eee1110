#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float p, r, t;


    cout<<"We are going to calculate Compound Interest.\nEnter the Principal ";
    cin>>p;
    cout<<"Enter the rate of interest ";
    cin>>r;
    cout<<"Enter the time in years ";
    cin>>t;

    cout<<endl;
    compP = p*pow((1+r), t);
    compI = compP - p;

    cout<<"The COMPOUND Interest for the amount "<< p <<" for the years "<<t<<" at "<<r<<" %"<<" is: "<<compI <<endl;
    cout<<"The compound principal is : " <<compP<<endl;


    return 0;
}

