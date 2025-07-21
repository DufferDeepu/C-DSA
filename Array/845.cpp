class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int i = 1;

        while(i <= n - 2){ //mpuntain can't be 1st or last element

            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                int count = 1;
                int left = i;
                int right = i;

                //go left(uphill)
                while(left > 0 && arr[left] > arr[left-1]){
                    left--;
                    count++;
                }

                //go right(downhill)
                while(right<n-1 && arr[right] > arr[right + 1]){
                    right++;
                    count++;
                } 

                ans = max(ans, count);
                i = right; //move i to the end of the mountain to avoid rechecking
            }
            else{
                i++;
            }
        }
        return ans;
    }
};