#include<iostream>
using namespace std;
int main()
{
    int num_int;
    double num_d;
    cout<<"\t'Double to Int conversion'\nEnter a DECIMAL value : ";
    cin>> num_d;    //taking the decimal value from user

    num_int = num_d; // converted to int
    cout<<"Value in integer(int): "<< num_int<<endl; //now print

    return 0;

}
