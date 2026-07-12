#include <iostream>
using namespace std;

int main() 
{
int i=0;
int n;
int sum=0;
cout<<"Enter the number";
cin>>n;

while(i<n){
    i++;
    if (i%2==0){
        sum+=i;
    }
    
   //cout<<i<<endl;
}
cout<<"Sum of odd numbers is: "<<sum<<endl;
}

