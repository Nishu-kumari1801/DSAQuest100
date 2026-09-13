class Solution {
public:
    string removeDuplicates(string s) {
        stack<int>st;
        for(char c:s){
            if(st.empty()|| c != st.top()) st.push(c);
            else st.pop();
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};