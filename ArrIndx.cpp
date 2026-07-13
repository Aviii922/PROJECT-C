#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={16, 17, 18, 19, 20};
    int size = 5;
    int large=INT_MIN;
    int small=INT_MAX;
    int largeindex=0;
    int smallindex=0;



    for (int i = 0; i < size; i++){

       // cout<<  sizeof(arr[i])/sizeof(0);

        //cout<< " the  arry size is :" << size << endl;
        
        if (arr[i] > large){
            large = arr[i];
            largeindex = i;
        }
        if (arr[i] < small){
            small = arr[i];
            smallindex=i;
        }
    }
        
    cout<< "the largest number is: "<< large << endl; 
    cout<<"the index is large: " << largeindex << endl;
        cout<< "the small number is: "<< small << endl;
        cout<<"the index is small: " << smallindex << endl;
        
    return 0;
}