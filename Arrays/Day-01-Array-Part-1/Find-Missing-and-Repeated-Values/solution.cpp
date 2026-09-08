class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_set<int> s;
        int expectedSum = 0;
        int actualSum = 0;
        int a = 0, b = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actualSum += grid[i][j];

                if (s.find(grid[i][j]) != s.end()) {
                    a = grid[i][j];
                }

                s.insert(grid[i][j]);
            }
        }

        int total = n * n;
        expectedSum = total * (total + 1) / 2;
        b = expectedSum - actualSum + a;

        return {a, b};
    }
};
