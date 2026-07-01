class Solution {
public:
    bool check(vector<vector<int>>& dist, int val) {
        int n = dist.size();

        if (dist[0][0] < val || dist[n - 1][n - 1] < val)
            return false;

        vector<vector<int>> vis(n, vector<int>(n, 0));
        queue<pair<int, int>> q;

        q.push({0, 0});
        vis[0][0] = 1;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            int r = it.first;
            int c = it.second;

            if (r == n - 1 && c == n - 1)
                return true;

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nc >= 0 && nr < n && nc < n &&
                    !vis[nr][nc] && dist[nr][nc] >= val) {
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }

        return false;
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;

        // Multi-source BFS
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            int r = it.first;
            int c = it.second;

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nc >= 0 && nr < n && nc < n &&
                    dist[nr][nc] == INT_MAX) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }

        int low = 0;
        int high = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                high = max(high, dist[i][j]);

        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(dist, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
