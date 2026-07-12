#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double Number1;
    double Number2;
    string operation;

    cout<<"Enter Operation: (+,-,*,/) : " ;
    cin>>operation;

    cout<<"Enter number1:" ;
    cin>>Number1;
    cout<<"Enter number2:" ;
    cin>>Number2;

    if (operation == "+"){
    cout<<   Number1 + Number2;
    }
    if(operation == "-")
{
    cout<<Number1 - Number2;
}
    if(operation == "*")
{
    cout<<Number1 * Number2;
}
    else if(operation == "/")
{
    cout << Number1 / Number2;
}
return 0;
}