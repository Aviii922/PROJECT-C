#include <iostream>
#include <climits>
using namespace std;

int main() {
    int smallarr[] = {5, 28, 35, 6, 7, 44};
    int size = 6;
    int element = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (smallarr[i] < element) {
            element = smallarr[i];
        }
    }

    cout << "Smallest number = " << element << endl;

    return 0;
}