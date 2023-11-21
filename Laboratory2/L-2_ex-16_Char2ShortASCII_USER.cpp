//This example promotes a char to short to int to a float to a double

#include <iostream>
using namespace std;
int main()
{

    char c;
    cout<<"NOW it's your TURN"<<endl<<endl;

    cout<<"Enter a single character from your keyboard\n[They are case sensitive.]"<<endl;
    cin>> c;

    cout << "You entered:  "<< c <<endl;
    short s = c;    //In C++, short is a 16-bit signed integer data type. Used for small integers to save memory
    cout << "Your value in short s = "<< s <<endl;
    int i = s;      //printing ASCII code for the inserted number(here P)
    cout << "Your value in int i   = "<< i <<endl;
    long l = i;
    cout << "Your value in long l  = "<< l <<endl;
    float f = l;
    cout << "Your value in float f  = "<< f <<endl;
    double d = f;    //double is taking more memory
    cout << "Your value in double d  = "<< d <<endl<<endl;

    cout<<"Giving value from ASCII code but taking different memory"<<endl;



    return 0;

}

