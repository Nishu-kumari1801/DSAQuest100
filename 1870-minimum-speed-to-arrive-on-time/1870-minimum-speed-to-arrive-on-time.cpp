class Solution {
public:
    bool canReach(vector<int>&dist,double hour , int speed){
            double time = 0.0;
            for(int j=0;j<dist.size();j++){
                double t = double(dist[j])/speed;
                if(j!=dist.size()-1) time += ceil(t);
                else time += t;
            }
            return time<=hour;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low=1;
        int high = 10000000;
        int ans =-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canReach(dist,hour,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        
        }
        return ans;
    }
};