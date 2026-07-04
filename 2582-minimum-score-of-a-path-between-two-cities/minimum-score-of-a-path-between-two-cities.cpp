
   class Solution {
public:
    vector<vector<pair<int, int>>> graph;
    vector<bool> visited;
    int ans = INT_MAX;

    void dfs(int node) {
        visited[node] = true;

        for (auto &it : graph[node]) {
            int next = it.first;
            int dist = it.second;

            ans = min(ans, dist);

            if (!visited[next]) {
                dfs(next);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {

        graph.resize(n + 1);
        visited.resize(n + 1, false);

        // Build adjacency list
        for (auto &road : roads) {
            int u = road[0];
            int v = road[1];
            int d = road[2];

            graph[u].push_back({v, d});
            graph[v].push_back({u, d});
        }

        dfs(1);

        return ans;
    }
};