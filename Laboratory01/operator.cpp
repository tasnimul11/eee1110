#include <iostream>
using namespace std;

int main()
{
    int a, b=3, c=4, d=5, e=6;
    a = b;
    a += 2; //indicates a = a+2
    c -= 1;
    d *= b+1;
    e /= b;

    cout << "Results are "<< a"\n" << b ;
    return 0;

}
