class Solution {
public:

    void dfs(int node,vector<vector<int>> &isConnected,vector<bool> &vis){
        vis[node]=true;
        int v=isConnected.size();
        for(int i =0;i<v;i++){
            if(isConnected[node][i] == 1 && !vis[i]){
                dfs(i,isConnected,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<bool> vis(v, false);
        int cnt=0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,isConnected,vis);
            }
        }
        return cnt;
    }
};