
//Case insensitive Palindrome checker,
//makes uppercase to lowercase input

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    cout<<"PALINDROME CHECKER"<<endl;
    cout<<"=================="<<endl;

    cout<<"Enter a word: ";
    string word;
    getline(cin, word);

    for(int i=0; word[i]!= '\0'; i++)
    {
        if(word[i] >= 'A' && word[i]<='Z')
        {
            word[i] = word[i] + 32;    //making that any uppercase character to lowercase
                            //or, word[i] = word[i] + ('a' -'A');
                            //to make lower to uppercase you have to subtract 32
        }
    }
    bool is_palindrome = true;


    for(int i=0; i<word.length(); i++)
    {
        if(word[i] == word[word.length()-i-1])
        {
            is_palindrome = true;
        }
        else
        {
            is_palindrome = false;
        }
    }

    if(is_palindrome)
    {
         cout<<"It's a palindrome"<<endl;
    }
    else
    {
        cout<<"Oh no, it's not!"<<endl;
    }
}
