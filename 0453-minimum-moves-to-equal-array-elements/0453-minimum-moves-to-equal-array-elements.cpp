class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long moves =0;
        int mini = *min_element(nums.begin(),nums.end());
        for (int x:nums) moves += x-mini;
        return moves;
    }
};