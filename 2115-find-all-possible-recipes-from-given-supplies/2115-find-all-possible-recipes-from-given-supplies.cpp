
class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes,
                                  vector<vector<string>>& ingredients,
                                  vector<string>& supplies) {

        unordered_map<string, vector<string>> graph;
        unordered_map<string, int> indegree;

        // Initialize indegree
        for (int i = 0; i < recipes.size(); i++) {
            indegree[recipes[i]] = ingredients[i].size();
            for (auto &ing : ingredients[i]) {
                graph[ing].push_back(recipes[i]);
            }
        }

        queue<string> q;
        for (auto &s : supplies)
            q.push(s);

        vector<string> result;

        while (!q.empty()) {
            string cur = q.front();
            q.pop();

            for (auto &recipe : graph[cur]) {
                indegree[recipe]--;
                if (indegree[recipe] == 0) {
                    result.push_back(recipe);
                    q.push(recipe);
                }
            }
        }

        return result;
    }
};
