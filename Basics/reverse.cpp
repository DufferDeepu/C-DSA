#include<iostream>
using namespace std;

void reverseArr(int arr[],int sz){
    int st = 0;
    int end = sz-1;
    while (st < end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
    
   
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;

    reverseArr(arr, sz);

    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }

    cout<<endl;
    
    return 0;
}