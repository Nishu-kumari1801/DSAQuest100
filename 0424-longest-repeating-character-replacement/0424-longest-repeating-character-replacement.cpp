class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        unordered_map<char,int>mp;
        int maxfreq=0,left=0;
        int maxlen =0;
        for(int right =0;right<n;right++){
            mp[s[right]]++;
            maxfreq = max(maxfreq,mp[s[right]]);
            if((right-left+1)-maxfreq>k){
                mp[s[left]]--;
                left++;
            }
            maxlen = max(maxlen, right-left+1);
        }
        return maxlen;
    }
};