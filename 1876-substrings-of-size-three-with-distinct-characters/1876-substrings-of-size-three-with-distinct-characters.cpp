class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int>freq;
        int left=0;
        int ans=0;
        for(int right=0;right<s.length();right++){
            freq[s[right]]++;

            //maintaining window size

            if(right-left+1>3){
                freq[s[left]]--;
                if(freq[s[left]]==0) freq.erase(s[left]);
                left++;
            }

            //updating the ans
            if(right-left+1 == 3 && freq.size()==3) ans++;
        }
        return ans;
    }
};