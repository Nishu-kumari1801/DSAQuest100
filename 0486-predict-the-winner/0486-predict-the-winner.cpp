class Solution {
public:
    bool solve(vector<int>& nums,int left,int right,int score1,int score2, bool player1){
        if(left>right) return score1>=score2;
        if(player1){
            bool takeleft=solve(nums,left+1,right,score1+nums[left],score2,!player1);
            bool takeright=solve(nums,left,right-1,score1+nums[right],score2,!player1);
            return takeleft||takeright;
        }else{
            bool takeleft = solve(nums,left+1,right,score1,score2+nums[left],!player1);
            bool takeright = solve(nums,left,right-1,score1,score2+nums[right],!player1);
            return takeleft && takeright ;
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        return solve(nums,0,nums.size()-1,0,0,true);
    }
};