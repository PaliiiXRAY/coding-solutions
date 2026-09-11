class Solution {
public:
    int solve(int i, int j, vector<int>& arr, vector<vector<int>>& dp) {
        if (i >= j) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        int ans = 1e9;
        for (int k = i; k < j; k++) {
            int res = arr[i-1] * arr[k] * arr[j] + solve(i, k, arr, dp) + solve(k + 1, j, arr, dp);
            ans = min(ans, res);
        }
        return dp[i][j] = ans;
    }

    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));

        return solve(1, n - 1, arr, dp);
    }
};