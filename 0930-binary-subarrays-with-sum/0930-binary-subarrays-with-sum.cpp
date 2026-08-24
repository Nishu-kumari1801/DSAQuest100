class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0;
        int ans=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int val:nums){
            sum+=val;
            if(mp.find(sum-goal)!=mp.end()){
                ans+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return ans;
    }
};