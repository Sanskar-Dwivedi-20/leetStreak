class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        
        string string1 = "";
        string string2 = "";
        
        int n = min(s1.size(),s2.size());
        
        for(int i = 0; i < n; i++){
            if(s1[i]!= s2[i]){
                string1 += s1[i];
                string2 += s2[i];
            } else {
                if(!string1.empty()){
                    ans.push_back({string1, string2});
                    string1 = "";
                    string2 = "";
                }
            }  
        }
        
        if(!string1.empty()){
            ans.push_back({string1, string2});
        }
        
        return ans;
    }
};