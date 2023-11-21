#include <iostream>
using namespace std;
int main()

{
    float p, r, t, interest;

    cout<<"We are going to calculate Simple Interest.\nEnter the Principal ";
    cin>>p;
    cout<<"Enter the rate of interest ";
    cin>>r;
    cout<<"Enter the time in years ";
    cin>>t;
    cout<<endl;

    interest = (p*r*t)/100; // I = p*t*(r/100) or I =prn; r= percentage/100

    cout<<"The Simple Interest for the amount "<< p <<" for the years "<<t<<" at "<<r<<" %"<<" is: "<<interest<<endl;

    return 0;

}
