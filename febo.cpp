#include<iostream>
using namespace std;
int main ()
{
    int a;
    int b;
    cout<<" Please enter 1 OnlY:";
    cin>>a;
    cout<<"Please enter 2 OnlY:";
    cin>>b;

    cout<<a<< " "<<b;
    for(int i=2;i<10;i++)
    {
        int c =a+b;
        cout<<c;
        a=b;
        b=c;
    }
    return 0;

}