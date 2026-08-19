class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int count0=0;
        int len=INT_MIN;
        for(int right=0;right<n;right++){
            if(nums[right]==0) count0++;
            while(count0>k){
                if(nums[left]==0) count0--;
                left++;
            }
            len=max(len,right-left+1);
        }

        return len;
    }
};