class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //by considering the value 0 as -1 and 1 as 1 the ques become to find the longest subarray having sum =0;

        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int maxLen=0;
        for(int i=0;i<nums.size();i++){
            nums[i]==0?sum--:sum++;
            if(mp.find(sum)!=mp.end()){
                maxLen=max(maxLen,i-mp[sum]);
            }else{
            mp[sum]=i;
            }
        }
        return maxLen;
    }
};