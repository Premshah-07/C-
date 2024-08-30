#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : "<<endl;
    cin>>ch;
    if(int(ch)>=65 && int(ch)<=90)
    {
        cout<<"The character is upper case."<<endl;
    }
    else if(int(ch)>=97 && int(ch)<=122)
    {
        cout<<"The character is lower case."<<endl;
    }
    else if(int(ch)>=48 && int(ch)<=57)
    {
        cout<<"The character is numeric."<<endl;
    }
    else
    {
        cout<<"It is some other character"<<endl;
    }
    return 0;
}