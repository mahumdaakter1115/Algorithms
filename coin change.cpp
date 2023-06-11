#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int countWays(int n, int x, vector<int>& coins) {
    vector<int> dp(x + 1);
    dp[0] = 1;

    for (int i = 1; i <= x; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i - coins[j] >= 0) {
                dp[i] = (dp[i] + dp[i - coins[j]]) % MOD;
            }
        }
    }

    return dp[x];
}

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    int ways = countWays(n, x, coins);
    cout << ways << endl;

    return 0;
}
