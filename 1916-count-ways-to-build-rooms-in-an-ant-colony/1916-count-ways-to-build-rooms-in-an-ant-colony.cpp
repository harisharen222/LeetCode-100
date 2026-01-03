class Solution {
public:
    static const int MOD = 1e9 + 7;
    vector<vector<int>> tree;
    vector<long long> fact, invFact;

    long long modPow(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return res;
    }

    void precompute(int n) {
        fact.resize(n + 1);
        invFact.resize(n + 1);
        fact[0] = 1;
        for (int i = 1; i <= n; i++)
            fact[i] = fact[i - 1] * i % MOD;

        invFact[n] = modPow(fact[n], MOD - 2);
        for (int i = n; i > 0; i--)
            invFact[i - 1] = invFact[i] * i % MOD;
    }

    pair<long long, int> dfs(int u) {
        long long ways = 1;
        int size = 0;

        for (int v : tree[u]) {
            auto [childWays, childSize] = dfs(v);
            ways = ways * childWays % MOD;
            ways = ways * invFact[childSize] % MOD;
            size += childSize;
        }

        ways = ways * fact[size] % MOD;
        return {ways, size + 1};
    }

    int waysToBuildRooms(vector<int>& prevRoom) {
        int n = prevRoom.size();
        tree.resize(n);

        for (int i = 1; i < n; i++) {
            tree[prevRoom[i]].push_back(i);
        }

        precompute(n);
        return dfs(0).first;
    }
};
