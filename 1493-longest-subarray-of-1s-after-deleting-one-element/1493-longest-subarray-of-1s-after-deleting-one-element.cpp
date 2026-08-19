class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int zeroes=0;
        int left=0,ans=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0) zeroes++;
            if(zeroes>1){
                if(nums[left]==0) zeroes--;
                left++;
            }
            ans=max(ans,right-left);
        }
        return ans;
    }
};