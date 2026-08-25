class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int total=0;
        for(int val : nums){
            total = (total+val)%p;
        }
        int tar = total;
        if(tar==0) return 0;
        unordered_map<int,int>mp; // to store rem of prefix sum and index value;
        mp[0]=-1;
        int sum = 0;
        int len = INT_MAX;
        for(int i=0;i<nums.size();i++){
           sum = (sum+nums[i])%p;
           int rem = sum;
           int need =(rem-tar+p)%p;
           if(mp.find(need)!=mp.end()){
             len = min(len , i-mp[need]);
           }
           mp[rem]=i;
        }
        if(len==INT_MAX||len ==nums.size()) return -1;
        return len;
    }
};