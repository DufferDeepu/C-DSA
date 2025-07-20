class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int st = 0, end = 0, zeros = 0, maxLen = 0;
        int n = nums.size();
        while( end < n ){
            if(nums[end] == 0){
                zeros++;
            }
            while(zeros > k){
                if(nums[st] == 0){
                    zeros--;
                }
                   st++;
            }
                int len = end - st + 1;
                maxLen = max(maxLen, len);
                end++;
        }
        return maxLen;
    }
};