class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        unordered_set<int>s2;
        for(int i:nums1) s.insert(i);
        for(int i:nums2) {
            if(s.find(i) != s.end()) s2.insert(i);
        }
        vector<int>ans(s2.begin(),s2.end());
        return ans;
    }
};