#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, y;
    cout<<"Input 2 decimal values of x & y"<<endl;
    cout<<"x = " <<endl;
    cin>> x;
    cout<<"x = "<< x <<" & ";

    cout<<"y = " <<endl;
    cin>> y;
    cout<<"y = "<< y <<endl;

    cout<<"\t x+y = "<< x+y <<endl;
    cout<<"\t x*y = "<< x*y <<endl;
    cout<<"\t x-y = "<< x-y <<endl;
    cout<<"\t x/y = "<< x/y <<endl;
    // cout<<"   Remainder = "<< x%y <<endl;
    //float, double can't operate REMAINDER,
    //we need to use fmod() & <cmath> header file

    cout<<"  Again,"<<endl;

    // double x, y; SAME VARIABLE CAN'T BE ASSIGNED TO ANOTHER DATA TYPE
    double p, q, remainder;

    cout<<"Input 2 decimal values of p & q"<<endl;
    cout<<"p = " <<endl;
    cin>> p;
    cout<<"p = "<< p <<" & ";

    cout<<"q = " <<endl;
    cin>> q;
    cout<<"q = "<< q <<endl;

    /*int vagfol;

    vagfol= p/q;
    cout<<" p/q = "<< p/q <<endl;
    */
    cout<<" p/q = "<< p/q <<endl;
    cout<<" Remainder = ";
    remainder=fmod(p, q); //had to initialize 'remainder' in double type first;



    return 0;

}
