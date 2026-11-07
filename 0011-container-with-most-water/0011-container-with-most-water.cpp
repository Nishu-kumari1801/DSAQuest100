class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,maxWater=0;
        while(l<r){
            int ht=min(height[l],height[r]);
            int width= r-l;
            maxWater=max(maxWater,ht*width);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxWater;
    }
};