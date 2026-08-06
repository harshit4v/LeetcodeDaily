class Solution {
public:
    void dfs(int u, vector<vector<int>>&adj,vector<bool>& vis) {
        vis[u] = true;
        for (auto v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                dfs(v, adj, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int cnt = 0;
        int V = isConnected.size();
        vector<vector<int>>adj(V);
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, adj, vis);
                cnt++;
            }
        }
        return cnt;
    }
};