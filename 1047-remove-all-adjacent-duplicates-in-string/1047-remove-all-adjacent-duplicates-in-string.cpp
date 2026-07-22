class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char>str;
        string res;

        for(int i=0;i<n;i++){
            if(str.empty()){
                str.push(s[i]);
                continue;
            }
            else if(str.top() == s[i]){
                str.pop();
                continue;
            }
            else{
                str.push(s[i]);
            }
        }
        while(!str.empty()){
            res.push_back(str.top());
            str.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};