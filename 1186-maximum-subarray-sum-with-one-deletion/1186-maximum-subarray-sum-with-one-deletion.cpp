class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();

        int noDelete = arr[0];
        int oneDelete = INT_MIN;
        int ans = arr[0];

        for(int i=1;i<n;i++){
            int prevNodelete =  noDelete;
            int prevOnedelete = oneDelete;

            noDelete = max(prevNodelete+arr[i], arr[i]);
            
            if(prevOnedelete == INT_MIN){
                oneDelete = prevNodelete;
            }
            else{
                int v2 = prevOnedelete + arr[i];
                oneDelete = max(v2, prevNodelete);
            }
            ans = max(ans, max(oneDelete, noDelete));
        }
        return ans;
    }
};