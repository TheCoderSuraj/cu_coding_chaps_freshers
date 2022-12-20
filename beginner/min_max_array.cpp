/*
Given an array of size N. The task is to find the maximum and the minimum element of the array.

Input: arr[] = {22,35, 9, 14, 8, 17, 35,3}

Output:  
Minimum element is: 3
Maximum element is: 35
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {22,35, 9, 14, 8, 17, 35,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0], max = arr[0];
    for(int i = 0; i < len;i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cout << "min num is: " << min << endl;
    cout << "max num is: " << max << endl;
    return 0;
}
