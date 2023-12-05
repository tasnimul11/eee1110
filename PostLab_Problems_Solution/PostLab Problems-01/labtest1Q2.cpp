#include<iostream>
using namespace std;
int main()
{
    float actual, asses, tax;
    cout<<"Enter the actual value ";
    cin>>actual;

    asses = (actual*40)/100; //as 40%
    tax = asses*0.65/100; //as 0.65%, calculated from the given hints

    cout<<endl;
    cout<<"The assesment value is : "<< asses<<endl;
    cout<<"The property tax is    :"<< tax<<endl;

    return 0;
}
