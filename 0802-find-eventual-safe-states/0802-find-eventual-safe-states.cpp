class Solution {
public:
    bool dfsCheck(int node , vector<vector<int>>&graph ,vector<int>&vis,vector<int>&pathvis,vector<int>&check){
        vis[node] =1;
        pathvis[node] =1;
        check[node] = 0;
        for(auto it:graph[node]){
            if(!vis[it]){
                if(dfsCheck(it,graph,vis,pathvis,check)==true){
                    check[node]=0;
                    return true;
                }
            }else if (pathvis[it]){
                check[node] = 0;
                return true;
            }
        }

        check[node] =1;
        pathvis[node] = 0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> vis(v, 0);
        vector<int> pathvis(v, 0);
        vector<int> check(v, 0);

        vector<int>safeNodes;
        for(int i=0;i<v;i++){
           if(!vis[i]) dfsCheck(i,graph,vis,pathvis,check);
        }
        for(int i=0;i<v;i++){
            if(check[i]==1) safeNodes.push_back(i);
        }
        return safeNodes;
    }
};