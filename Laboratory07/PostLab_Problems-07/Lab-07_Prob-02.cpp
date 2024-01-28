#include <iostream>
using namespace std;


void swap(int *p, int *q, int *r, int *s)
{
    int temp1, temp2;
    temp1 =*p;
    temp2 = *q;
    *p = *s;
    *q = *r;
    *r = temp2;
    *s = temp1;

}

int main()
{
    int p, q, r, s;
    cout<<"Enter 4 values: ";
    cin>> p >> q >>r >> s;

    cout<<endl<<"Before swapping : "<<endl;
    cout<<"P = "<< p <<endl;
    cout<<"Q = "<< q <<endl;
    cout<<"R = "<< r <<endl;
    cout<<"S = "<< s <<endl;

    swap(&p, &q, &r, &s);

    cout<<endl<<"After Swapping : " <<endl;
    cout<<"P = "<< p <<endl;
    cout<<"Q = "<< q <<endl;
    cout<<"R = "<< r <<endl;
    cout<<"S = "<< s <<endl;
}
