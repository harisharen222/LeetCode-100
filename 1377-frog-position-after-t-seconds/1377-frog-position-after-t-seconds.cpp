class Solution {
public:
    vector<vector<int>> adj;
    double ans = 0.0;

    void dfs(int node, int parent, int t, int target, double prob) {
        if (t == 0) {
            if (node == target)
                ans = prob;
            return;
        }

        int children = 0;
        for (int nei : adj[node]) {
            if (nei != parent)
                children++;
        }

        // If no unvisited children
        if (children == 0) {
            dfs(node, parent, t - 1, target, prob);
            return;
        }

        double nextProb = prob / children;
        for (int nei : adj[node]) {
            if (nei != parent) {
                dfs(nei, node, t - 1, target, nextProb);
            }
        }
    }

    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        adj.resize(n + 1);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        dfs(1, 0, t, target, 1.0);
        return ans;
    }
};
