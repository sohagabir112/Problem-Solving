class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low =0;
        int high =0;
        int n = s.size();
        
        unordered_map<char, int>f;
        int res = INT_MIN;
        for(high=0; high<n; high++){
            f[s[high]]++;
            while(f[s[high]]>1){
                f[s[low]]--;
                low++;
            }
            res = max(res, high-low+1);
        }
        return res==INT_MIN? 0:res;
    }
};