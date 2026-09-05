class Solution {
public:
    bool checkGraph(int node,int col,vector<int> &color,vector<vector<int>> &adj){
        color[node] = col;
        for(auto it : adj[node]){
            if(color[it] == -1){
                if(checkGraph(it,!col,color,adj) == false) return false;
            }else if(color[it] == color[node]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        for(int i = 0;i <n;i++){
            if(color[i] == -1){
                if(checkGraph(i,0,color,graph) == false) return false;
            }
        }
        return true;
    }
};