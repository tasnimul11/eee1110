/* 1. Write and run a C++ program for a calculator that takes
two decimal numbers from a user. It performs the addition, subtraction, division and multiplication.
It shows the results on the output screen */

#include<iostream>
using namespace std;

int main()
{
    float i1, i2, add, sub, mul, div;

    cout<<"Enter two decimal numbers.\n Press Space to spearate:";
    cin>> i1>> i2;

    add = i1+i2;
    sub = i1-i2;
    mul = i1*i2;
    div = i1/i2;

    cout<<"The sum is         :"<<add<<endl;
    cout<<"The subtraction is :"<<sub<<endl;
    cout<<"The product is     :"<<mul<<endl;
    cout<<"The Quotient is    :"<<div<<endl;

    return 0;

}
