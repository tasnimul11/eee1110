#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius, circum, area;
    const double pi= 3.14159265;

    cout<<"Enter the Radius of your circle = ";
    cin>> radius;
    cout<<endl;
    circum = 2*pi*radius;
    area = pi*pow(radius, 2); //as Area of a circle is pi*r^2

    cout<<"Circumference & area is = "<<circum<<" "<<area <<endl;

}
/* RESULT:
Enter the radius of your circle = 20 //by user(can be anything

Circumference is = 125.664
         Area is = 1256.64
*/
