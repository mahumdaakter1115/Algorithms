
#include<bits/stdc++.h>
using namespace std;

int maxChocolates(int N, int K, const vector<int>& chocolates, const vector<int>& weights) {
    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            if (weights[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], chocolates[i - 1] + dp[i][j - weights[i - 1]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[N][K];
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> chocolates(N);
    for (int i = 0; i < N; i++) {
        cin >> chocolates[i];
    }

    vector<int> weights(N);
    for (int i = 0; i < N; i++) {
        cin >> weights[i];
    }

    int maxNumChocolates = maxChocolates(N, K, chocolates, weights);
    cout << maxNumChocolates << endl;

    return 0;
}
