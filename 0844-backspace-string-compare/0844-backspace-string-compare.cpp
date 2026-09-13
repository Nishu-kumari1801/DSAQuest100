class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>st1;
        for(char c:s){
            if(st1.empty() && c=='#') continue;
            else if(c=='#') st1.pop();
            else st1.push(c);
        }
        stack<int>st2;
        for(char c:t){
            if(st2.empty() && c=='#') continue;
            else if(c=='#') st2.pop();
            else st2.push(c);
        }
        return st1==st2;
    }
};