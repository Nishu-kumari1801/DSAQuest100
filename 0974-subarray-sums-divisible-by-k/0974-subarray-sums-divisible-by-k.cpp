class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        int sum =0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int val:nums){
            sum+=val;
            int rem =((sum%k)+k)%k;
            if(mp.find(rem)!=mp.end()){
                ans+=mp[rem];
            }
            mp[rem]++;
        }
        return ans;
    }
};