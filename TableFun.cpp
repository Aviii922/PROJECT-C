#include <iostream>
using namespace std;
int printTable(int n)
{
    for(int i=1; i<=10; i++)
    {
        cout<<n*i<<" ";
    }
    return n;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    printTable(a);
    return 0;
    

}