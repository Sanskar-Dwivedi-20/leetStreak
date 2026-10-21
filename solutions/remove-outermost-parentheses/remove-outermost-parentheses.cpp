class Solution {
public:
    string removeOuterParentheses(string s) {
        int bal = 0, j = 0;
        for(int i = 0; i< s.size(); i++){
            const char c = s[i];
            bal += (c=='(')-(c==')');
            if((bal==1&&c=='(') || (bal==0&&c==')')) 
                continue;
            s[j++] = s[i];
        }
        s.resize(j);
        return s;
    }
};