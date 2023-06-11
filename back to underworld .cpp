#include<bits/stdc++.h>
using namespace std;

int findMaxMembers(int n, vector<pair<int, int>>& rivals) {
    unordered_set<int> vampires, lykans;

    for (int i = 0; i < n; i++) {
        int u = rivals[i].first;
        int v = rivals[i].second;

        vampires.insert(u);
        lykans.insert(v);
    }

    int maxMembers = max(vampires.size(), lykans.size());
    return maxMembers;
}

int main() {
    int t;
    cin >> t;

    for (int caseNum = 1; caseNum <= t; caseNum++) {
        int n;
        cin >> n;

        vector<pair<int, int>> rivals(n);
        for (int i = 0; i < n; i++) {
            cin >> rivals[i].first >> rivals[i].second;
        }

        int maxMembers = findMaxMembers(n, rivals);
        cout << "Case " << caseNum << ": " << maxMembers << "\n";
    }

    return 0;
}

