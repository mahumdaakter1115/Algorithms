
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
const int MAXSUM = 100000;

int n, x[MAXN];
bool dp[MAXN+1][MAXSUM+1];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    dp[0][0] = true;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= MAXSUM; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= x[i-1]) {
                dp[i][j] |= dp[i-1][j-x[i-1]];
            }
        }
    }

    int cnt = 0;
    for (int j = 1; j <= MAXSUM; j++) {
        if (dp[n][j]) {
            cnt++;
        }
    }

    cout << cnt << endl;
    for (int j = 1; j <= MAXSUM; j++) {
        if (dp[n][j]) {
            cout << j << " ";
        }
    }
    cout << endl;

    return 0;
}
