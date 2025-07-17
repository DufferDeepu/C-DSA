#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int tar){
    for(int i = 0; i < sz; i++){
        if (arr[i] == tar)
        {
            return i;
        }  
    }
    return -1;
}

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    int tar = 5;

    cout << linearSearch(arr, sz, tar) << endl;
    return 0;
}