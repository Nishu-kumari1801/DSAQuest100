class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        
        int base=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0) base+=customers[i];
        }

        int left=0;
        int sum=0,maxSum=INT_MIN;
        for(int right=0;right<n;right++){
            if(grumpy[right]==1){
                sum+=customers[right];
            }
            
            if(right-left+1>minutes) {
                if(grumpy[left]==1){
                   sum-=customers[left];
                }
                left++;
            }
            if(right-left+1 == minutes) maxSum=max(sum,maxSum);
        }
        return base+maxSum;
    }
};