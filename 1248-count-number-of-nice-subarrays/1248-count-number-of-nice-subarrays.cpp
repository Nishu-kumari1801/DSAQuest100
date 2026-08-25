class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int sum =0;
        int cnt =0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            nums[i]%2==0?sum+=0:sum++;
            if(mp.find(sum-k)!=mp.end()){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};