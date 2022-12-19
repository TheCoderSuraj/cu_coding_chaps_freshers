/*
Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.

Note: There are no duplicates in the list.

Input: arr[] = {1, 2, 5, 4, 6, 3, 8}, N = 8
Output: 7
Explanation: The missing number between 1 to 8 is 7
*/

#include <iostream>

using namespace std;

int findMissing(int arr[], int n){
    int sum = n * (n + 1)/2;
    for(int i = 0; i < n-1 ;  i++){
        sum -= arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1,3,5,2,4,6,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << findMissing(arr, len + 1) << endl;
    return 0;
}