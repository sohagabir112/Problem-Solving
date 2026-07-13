class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n =nums.size();
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int ans = nums[0];

        if(n<2){
            return abs(nums[0]);
        }

        for(int i=1;i<n;i++){
            int v1 = nums[i];
            int v2 = nums[i] + maxEnding;
            int v3 = nums[i] + minEnding;

            maxEnding = max(v1, v2);
            minEnding = min(v1, v3);
            ans= max(ans, max(abs(maxEnding), abs(minEnding)));
        }
        return ans;
    }
};