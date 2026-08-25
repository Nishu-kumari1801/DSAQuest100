class Solution {
public:
    bool search(vector<int>&nums,int tar){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==tar) return true;
        }
        return false;
    }
    int missingMultiple(vector<int>& nums, int k) {
        for(int i=1;i<=nums.size();i++){
            if(!search(nums,i*k)) return i*k;
        }
        return (nums.size()+1)*k;
    }
};