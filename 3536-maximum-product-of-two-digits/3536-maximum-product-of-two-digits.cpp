class Solution {
public:
    int maxProduct(int n) {
        int num=n;
        vector<int>ans;
        while(num){
            ans.push_back(num%10);
            num=num/10;
        }
        sort(ans.rbegin(),ans.rend());
        return ans[0]*ans[1];
    }
};