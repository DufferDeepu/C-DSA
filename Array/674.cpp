class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        int ans = 1;
        int count = 1;
        int i = 0;

         while(i < n-1){
            if(nums[i] < nums[i+1]){
                count++;
            }else {
                count = 1;
            }
            ans = max(ans, count);
            i++;
         }
         return ans;
    }
};