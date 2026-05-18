#include<iostream>
using namespace std;

int main()
{
    for (int i=1;i<=4;i++)
{
    for (int j=1;j<i;j++)
    {
        cout<<" ";
    }
    
    
    for(int k=4-i+1;k>=1;k--)
    {
        cout<< "*";
    }
cout<<endl;
}



    
}