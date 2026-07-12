#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any char.";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
    cout<<" SIR THIS CHARACTER IS IN LOWER CASE";

}
else if (ch>='A' && ch<= 'Z')
{
cout<<"HII SIR THIS CHARACTER IS IN THE UPPER CASE";

}

    else
    {
        cout<<"digit";
    }



}
