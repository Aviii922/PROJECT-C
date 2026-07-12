#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5, 12, -4, 44, -4};
    int size = 5;
    int largest = INT_MIN;
    int small = INT_MAX;
    for (int i = 0; i < size; i++){   

        if(arr[i] > largest){

            largest = arr[i];
        }
        if (arr[i] < small){
            small = arr[i];
        }
    
    }
cout<<"the largest number is :" << largest << endl;    
cout<<"the smallest number is :" << small << endl;    

    
    return 0;
}