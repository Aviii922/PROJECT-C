#include<iostream>
#include <climits>
using namespace std;
int main(){
    int sizeIndx[]= {5, 4, -3, 29, 12};
    int size=5;
    int largest = INT_MIN;
    int small = INT_MAX ;
    for(int i=0; i< size; i++){
        largest = max(sizeIndx[i], largest);
        small = min(sizeIndx[i], small);
    
    }

    cout<< "The largest INdex is : "<< largest << endl;
    cout<< "The smallest INdex is :" << small << endl;
    
    

return 0;

    }
