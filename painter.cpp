#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){
    int painters = 1, time = 0;
    for(int i=0; i<n; i++){
        if (arr[i] > maxAllowedTime) return false;

        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m){
    int sum = 0, maxVal = INT_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]); 
    }

    int ans = -1;
    int st = maxVal; 
    int end = sum;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {5, 10, 30, 20, 15};
    int n = 5; // no of boards
    int m = 3; // no. of painters

    cout << minTimeToPaint(arr, n , m) << endl;
    return 0;
}