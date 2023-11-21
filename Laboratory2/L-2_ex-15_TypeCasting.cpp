#include<iostream>
using namespace std;
int main()
{
    //We can change the data type using two kinds of TypeCasting

    double d1, d2;
    int i1, i2;

    cout<<"\tThis prompt will deliver the integer part."<<endl;
    cout<<"Write 1st double(decimal) value: ";
    cin>> d1;

    i1 =(int)d1; //1st method taking int within bracket

    cout<<"Int part : "<< i1 <<endl;

    cout<<"----------------------------------------"<<endl;

    cout<<"Write 2nd double(decimal) value: ";
    cin>> d2;

    i2 = int (d2); //2nd method, taking variable(here d2) within bracket

    cout<<"Int part of 2nd value: "<<i2<<endl;

    return 0;

}
