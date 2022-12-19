#include <iostream>

using namespace std;
void reverse(int *arr, int len){
    for(int i = 0; i < len/2 ;i++){
        swap(arr[i], arr[len - i -1]);
        cout<< i << "|" << len - i << endl;
    }
}


int main()
{
    int arr[] = { 1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, len);

    for(int i = 0; i < len; i++){
        printf(" %d,",arr[i]);
    }
    return 0;
}
