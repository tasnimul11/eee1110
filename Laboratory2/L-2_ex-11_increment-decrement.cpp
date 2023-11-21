#include<iostream>
using namespace std;
int main()
{
    int a, b;

    cout<<"When a=100,"<<endl;
    //
    a = 100;
    b = ++a; //b equals a+1 & a is returned to a=a+1
    cout<<"Prefix increment  : a ="<<a<<" & b ="<<b<<endl;

    a = 100;
    b = a++; //b equals a & a is returned to a+1
    cout<<"Postfix increment : a ="<<a<<" & b ="<<b<<endl;

    cout<<"-----------------------------------------------------"<<endl;

    cout<<"When a=50,"<<endl;
    //
    a = 50;
    b = --a; //b = a-1 & a also a=a-1
    cout<<"Prefix decrement  : a ="<<a<<" & b ="<<b<<endl;

    a = 50;
    b = a--; //b=a=50 & a is returned to a=a-1
    cout<<"Postfix decrement : a ="<<a<<" & b ="<<b<<endl;

    return 0;

}
/*RESULT:

When a=100,
Prefix increment  : a =101 & b =101
Postfix increment : a =101 & b =100
-----------------------------------------------------
When a=50,
Prefix decrement  : a =49 & b =49
Postfix decrement : a =49 & b =50
*/
