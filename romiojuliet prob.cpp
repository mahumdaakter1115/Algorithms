#include <iostream>
#include <vector>

using namespace std;

void dfs(int city, const vector<vector<int>>& roads, vector<bool>& visited, int K, int& count) {
    if (K < 0) {
        return;
    }

    if (K == 0 && visited[city]) {
        count++;
        return;
    }

    visited[city] = true;

    for (int neighbor : roads[city]) {
        dfs(neighbor, roads, visited, K - 1, count);
    }

    visited[city] = false;
}

bool canBeReunited(int N, const vector<vector<int>>& roads, int X, int Y, int K) {
    vector<bool> visited(N, false);
    int count = 0;

    dfs(X, roads, visited, K, count);

    return count > 0;
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
