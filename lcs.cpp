#include<bits/stdc++.h>
using namespace std;

unordered_map<string, string> memo;

string LCS(string s, string t) {
    if (s.empty() || t.empty()) {
        return "";
    }

    string key = s + "|" + t;
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    if (s.back() == t.back()) {
        string lcs = LCS(s.substr(0, s.length() - 1), t.substr(0, t.length() - 1)) + s.back();
        memo[key] = lcs;
        return lcs;
    }

    string lcs1 = LCS(s, t.substr(0, t.length() - 1));
    string lcs2 = LCS(s.substr(0, s.length() - 1), t);
    string lcs = (lcs1.length() > lcs2.length()) ? lcs1 : lcs2;
    memo[key] = lcs;
    return lcs;
}

int main() {
    string s, t;
    cin >> s >> t;

    string lcs = LCS(s, t);
    cout << lcs << endl;

    return 0;
}

