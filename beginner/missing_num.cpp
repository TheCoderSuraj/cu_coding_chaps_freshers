/*
Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.

Note: There are no duplicates in the list.

Input: arr[] = {1, 2, 5, 4, 6, 3, 8}, N = 8
Output: 7
Explanation: The missing number between 1 to 8 is 7
*/

#include <iostream>

using namespace std;

int findMissing(int arr[], int len){
    if(arr[0] != 1) return 1;
    for(int i = 1; i < len;  i++){
        if(arr[i] != (i + 1))
            return i + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << findMissing(arr, len) << endl;
    return 0;
}