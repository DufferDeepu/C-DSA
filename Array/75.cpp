#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){ // O(n^2)
    bool isSwap = false;
    for(int i=0, i<n-1; i++){
        if(arr[j] >arr[j+1]){
            swap(arr[j], arr[j+1])
            isSwap = true;
        }
    }
    if(isSwap){// array is already sorted
        return;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << "";
    }
    cout << endl;
}