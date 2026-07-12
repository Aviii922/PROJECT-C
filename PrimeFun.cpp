#include<iostream>
using namespace std;
PrimeNumber(int n)
{
if(n%2==0)
{
    cout<<"Not a prime number"<<endl;
}
else
{
    cout<<"Prime number"<<endl;
}
return n;
}
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    PrimeNumber(x);
    return 0;
}