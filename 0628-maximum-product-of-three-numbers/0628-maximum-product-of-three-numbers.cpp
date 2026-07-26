class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();

        int first=INT_MIN,second=INT_MIN,third=INT_MIN;
        int first_min = INT_MAX,second_min = INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i]>=first){
                third=second;
                second=first;
                first=nums[i];
            }
            else if(nums[i]>=second){
                third=second;
                second=nums[i];
            }
            else if(nums[i]>third){
                third=nums[i];
            }

            if(nums[i]<=first_min){
            second_min = first_min;
            first_min = nums[i];
            }
            else if(nums[i]<=second_min){
                second_min=nums[i];
            }
        }

        
        return max((first*second*third),(first_min*second_min*first));
    }
};