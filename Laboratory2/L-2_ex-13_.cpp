#include<iostream>
using namespace std;
int main()
{
    int input;
    double output;
    cout<<"Take a int number"<<endl;

    cin>>input; //input is an int number from user
    output = input;
    cout<<output<<endl<<"The value is automatically converted to double, resulting more digits after point.";

    //output will show the same integer number but when taking bits, it is taking more due to double

}
