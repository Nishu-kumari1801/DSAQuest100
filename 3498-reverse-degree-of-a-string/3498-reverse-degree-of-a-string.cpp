class Solution {
public:
    int reverseDegree(string s) {
        int ans =0;
        for(int i=0;i<s.size();i++){
            int pos= 26-(s[i]-'a');
            ans+= (i+1) * pos;
        }
        return ans;
    }
};