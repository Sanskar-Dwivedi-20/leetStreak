class Solution {
public:
    int help(int n) {
        if (n==0)
            return 0;
        return (n%2+ help(n/2));
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i= 0; i<=n; i++){
            ans.push_back(help(i));
        }
    return ans;
    }

};