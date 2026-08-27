class Solution {
public:

    //this problem is  same as LC 84  largest rectangle in histogram 
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>left(n);
        vector<int>right(n);

        //previous smaller element ;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            left[i]=st.empty()?-1:st.top();
            st.push(i);
        }

        while(st.size()>0) st.pop();

        //next smaller element 

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] > arr[i]) st.pop();
            right[i] = st.empty()?n:st.top();
            st.push(i);
        }

        long long ans = 0;
        const int MOD = 1e9 + 7;

        for(int i=0;i<n;i++){
            int leftCnt=i-left[i];
            int rightCnt = right[i]-i;
            ans = (ans+ 1LL*arr[i]*leftCnt*rightCnt)%MOD;
        }
        return ans;
    }
};