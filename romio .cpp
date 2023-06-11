#include<bits/stdc++.h>
using namespace std;

bool dfs(int city, const vector<vector<int>>& roads, vector<bool>& visited, int K) {
    if (K < 0) {
        return false;
    }

    if (K == 0 && city == 0) {
        return true;
    }

    visited[city] = true;

    for (int neighbor : roads[city]) {
        if (!visited[neighbor] && dfs(neighbor, roads, visited, K - 1)) {
            return true;
        }
    }

    visited[city] = false;
    return false;
}

bool canBeReunited(int N, const vector<vector<int>>& roads, int X, int Y, int K) {
    vector<bool> visited(N, false);
    visited[Y] = true;

    return dfs(X, roads, visited, K);
}

int main() {
    int N, E;
    cin >> N >> E;

    vector<vector<int>> roads(N);
    for (int i = 0; i < E; i++) {
        int A, B;
        cin >> A >> B;
        roads[A].push_back(B);
        roads[B].push_back(A);
    }

    int X, Y, K;
    cin >> X >> Y >> K;

    if (canBeReunited(N, roads, X, Y, K)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

