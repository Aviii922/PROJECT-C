#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, -3, 29, 12};
    int size = 5;

    int largestIndex = 0;
    int smallestIndex = 0;

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > arr[largestIndex])
        {
            largestIndex = i;
        }

        if(arr[i] < arr[smallestIndex])
        {
            smallestIndex = i;
        }
    }

    cout << "Largest element: " << arr[largestIndex]
        << " at index " << largestIndex << endl;

    cout << "Smallest element: " << arr[smallestIndex]
    << " at index " << smallestIndex << endl;

    return 0;
}