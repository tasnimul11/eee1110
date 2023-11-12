//prints two customized designs with asterisks(EX-04)

#include<iostream>
using namespace std;

int main()
{
    cout<< "An example of using '\\n'"<<endl; // double backslash indicates not to function \n in this line
    cout<< "*\n**\n***\n****\n*****\n******"<<endl<<endl;

    cout<<"Example of TAB '\\t'"<<endl;
    cout<<"\t*\t**\t**\t**\t*"<<endl;

    cout<<"\t*\n\t**\n\t***\n\t****\n\t*****"<<endl;
    cout<<"\t******\t**\t**\t**\t*"<<endl;

    return 0;

}
