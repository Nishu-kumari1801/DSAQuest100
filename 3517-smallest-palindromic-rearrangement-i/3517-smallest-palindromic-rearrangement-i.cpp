class Solution {
public:
    string smallestPalindrome(string s) {
        int len=s.length();
        int partition = len/2;
        sort(s.begin(),s.begin()+partition);
        for(int i=0;i<partition ;i++){
            s[len-i-1]=s[i];
        }
        return s;
    }
};