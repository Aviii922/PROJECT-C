#include<iostream>
using namespace std;

int main(){
    int arr []= {5, 7, 8, 8, 9};
    int size = 5;
    int arr2[] ={4, 9, 8, 5, 6};
    int size2 = 5;
    int size3= (size, size2);


    for(int i=0; i< size3; i++){

        int c = arr[i] + arr2[i];

        cout << " the output is :"<< c << endl;


    }
    return 0;
}