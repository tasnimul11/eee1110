/*LabTest-04
Q-1 Write a C++ program that Creates an array of size '5' containing a mixture of positive and negative numbers.
-Contains a user defined function named 'reversesign' which takes the address of the array created and the size of the array and it changes the sign of the numbers present in the array i.e., it turns negative numbers into positive numbers and positive numbers into negative numbers.
-The 'reversesign' function is to be of void type.
-Following the reversesign' function operation on the array created, display the contents of the array using a for loop in the main function.
Solution --> */

#include <iostream>
using namespace std;

int reversesign(int n)
{
    return n*= (-1);
}

int main()
{
    int arr[5] = {2, -99, 34, 11, -5};

    int(*funcPtr)(int) = reversesign;

    //solved by THP

    for(int i=0; i<5; i++)
    {
        cout<<"arr [" <<i << "] = " << funcPtr(arr[i]) <<endl;
    }

}
