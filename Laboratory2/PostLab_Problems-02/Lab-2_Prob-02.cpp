//2. Write and run a C++ program that asks the user to type the width and the length of a rectangle to
//calculate the area and the perimeter of that rectangle. Then it shows the result results on the output
//screen

#include<iostream>
using namespace std;

int main()
{
    float wid, len, area, peri;

    cout<<"I will calculate the area & the perimeter for your RECTANGLE"<<endl;
    cout<<"[Please put the values in METER]"<<endl;

    cout<<"Enter the width: ";
    cin>> wid;
    cout<<"Enter the Length: ";
    cin>> len;

    area = wid*len;
    peri = 2*(wid+len);  //as per formula of area n perimeter

    cout<<"     The Area is : "<<area<<" sq.meters"<<endl;
    cout<<"The perimeter is : "<<peri<<" meter"<<endl;

    return 0;
}

