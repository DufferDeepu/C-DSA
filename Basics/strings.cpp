// longest substring without repeating character



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(256, -1);
        int n = s.size();
        int st = 0, end = 0, maxLen = 0;
        while( end < n){
            if(lastSeen[s[end]] != -1 && lastSeen[s[end]] >= st){
                st = lastSeen[s[end]] + 1;
            }
            int len = end - st + 1;
            maxLen = max(len, maxLen);
            lastSeen[s[end]] = end;
            end++;
        }
        return maxLen;
    }
};
