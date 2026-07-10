class Solution {
public:
    int characterReplacement(string s, int k) {
        int low =0;
        int high =0;
        int n =s.size();
        unordered_map<char, int>f;
        int res = INT_MIN;
        int maxFreq = 0;

        for(high=0; high<n; high++){
            f[s[high]]++;
            maxFreq = max(maxFreq, f[s[high]]);
            
            while((high-low+1) - maxFreq > k){
                f[s[low]]--;
                low++;
            }
            res = max(res, high-low+1);
        }
        return res;
    }
};