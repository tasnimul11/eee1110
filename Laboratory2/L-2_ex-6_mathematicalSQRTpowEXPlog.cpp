//Modified version of Lab-2 Example 6

#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    double param, abso, root;
    cout<<"Input a numerical value"<<endl<<endl;
    cin>> param;
    abso = abs(param); //to get absolute value
    cout<<"       Absolute value is = "<< abso<<endl<<endl;

    root = sqrt(abso); //making sure that the value under root over is not negative, so used result in sqrt
    cout<<"Square root of the value = "<<root <<endl;         //Root
    cout<<"           Squared value = "<< pow(param, 2)<<endl; //Power
    cout<<"           e^(Your value)= "<< exp(param)<<endl;     //exp by exponential
    cout<<"               ln(value) = "<< log(abso)<<endl;    //ln
    cout<<"              log(value) = "<< log10(abso)<<endl;  //log
    cout<<"-----------------------------------------"<<endl;
    cout<<"P.S: ln & log values were counted using the absolute value of input"<<endl;

    return 0;

}

/*RESULT:

Input a numerical value

-100 //(by user)
       Absolute value is = 100

Square root of the value = 10
           Squared value = 10000
           e^(Your value)= 3.72008e-44
               ln(value) = 4.60517
              log(value) = 2
-----------------------------------------
P.S: ln & log values were counted using the absolute value of input */
