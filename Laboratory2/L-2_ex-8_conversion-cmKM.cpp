#include<iostream>
#include <cmath>
using namespace std;
int main()

{
    float cent, met, kilo;
    cout<<"Enter a value in Centimeter (CONVERT to Meter & Kilometer)"<<endl<<endl;
    cin>>cent;

    met = cent/100;
    kilo = cent/100000;

    cout<<" The distance is "<< met <<"m or "<<kilo<<"km"<<endl;

    return 0;
}
/*RESULT

Enter a value in Centimeter (CONVERT to Meter & Kilometer)

9000 //by user
 The distance is 90m or 0.09km
 */
