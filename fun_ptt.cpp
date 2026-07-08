#include<iostream>
using namespace std;

int patt(int n){
    // Assuming a default value for n
    for(int i = 1 ; i <= n ; i++){
        for(int k = 1 ; k <= i ; k++){
            cout << " * ";
        }
        cout << endl;
    }
}
    int main(){
        int rows;

        cout<<"Enter the number of rows: ";
        cin>>rows;
        patt(rows);

        return 0;

}
        