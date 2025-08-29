#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist){
    int cows = 1, lastStallsPos = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]-lastStallsPos >= minAllowedDist){
            cows++;
            lastStallsPos = arr[i];
        }
        if(cows == C){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C){

    sort(arr.begin(), arr.end());

    //st = 1, end =maxVal-minVal
    
    int st = 1, end = maxVal - minVal, ans = -1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(isPossible(arr, N, C, mid)){ //right
            ans = mid;
            st = mid + 1;
        } else { //left
            end = mid - 1;
        }
    }
    return ans;
}


int main(){
    int N = 5, C = 3;
    vector<int> arr={1, 2, 8, 4, 9}

    cout << getDistance(arr, N, C) << endl;
    return 0;
}