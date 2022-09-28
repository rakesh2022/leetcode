class Solution {
public:
    bool dfs(int curr, int col, vector<int>& color, vector<vector<int>>& adj) {
    color[curr]=col;

    for (int i : adj[curr]) {
        if (color[i] == -1) {
            if (!dfs(i, 1-color[curr], color, adj)) return false;
        }
        // color is same as well as it is not parent
        else if (color[i] == color[curr]) return false;
    }

    return true;
}
    bool isBipartite(vector<vector<int>>& adj) {
        int V=adj.size();
         vector<int> color(V, -1);

    for (int i = 0;i < V;i++) {
        if (color[i] == -1) {
            if (!dfs(i,0, color, adj)) return false;
        }
    }
    return true;
    }
};


