class Solution {
public:

    bool CanEat(vector<int>&piles,int h , int speed){
        long hrs=0;
        for(int x:piles) hrs+=(x+speed-1)/speed;
        return hrs<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high =0;
        int ans=0;
        for(int x:piles) high = max(high,x);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(CanEat(piles,h,mid)) {
                ans=mid;
                high=mid-1;
            }else {
                low=mid+1;
            }
        }
        return ans;
    }
};