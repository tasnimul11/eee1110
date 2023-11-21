#include<iostream>
using namespace std;

int main()
{
    float distance, lightspeed, delay, delaymin;

    distance = 34000000; //34,000,000 miles
    lightspeed = 186000; //186,000 miles per second

    delay = distance/lightspeed;//in second //s=vt formula
    delaymin = delay/60; //in min

    cout<<"The delay while talking to MARS: "<< delay <<" seconds or "<<delaymin<<" minutes"<<endl;

    return 0;
}
