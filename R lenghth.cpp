#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll inf = 1e17 + 10;

map<ll, int> vis;

int bfs(ll n, ll m)
{
    queue<pair<ll, int>> q;
    q.push(make_pair(m, 0));

    while (!q.empty())
    {
        pair<ll, int> now = q.front();
        q.pop();

        if (now.first == 0)
            return now.second;

        if (vis[now.first])
            continue;

        vis[now.first] = now.second;

        ll t = now.first;
        int len = 0;
        int cnt[11] = {0};

        while (t)
        {
            cnt[t % 10] = 1;
            t /= 10;
            len++;
        }

        if (len >= n)
            return now.second;

        for (int i = 2; i <= 9; i++)
        {
            if (cnt[i])
            {
                q.push(make_pair(now.first * i, now.second + 1));
            }
        }
    }

    return -1;
}

int main()
{
    ll n, m;
    cin >> n >> m;

    cout << bfs(n, m) << endl;

    return 0;
}
