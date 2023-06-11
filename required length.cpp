#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

#define endl '\n'

#define pii pair<ll, ll>

const ll maxn = 110;

const ll inf = 1e17 + 10;

map<ll, int>vis;

ll n, m, nn = 1;

ll cnt[11];



int bfs(ll s)

{

    queue<pii>q;

    q.push(make_pair(s, 0));

    while(q.size())

    {

        pii now = q.front();
	q.pop();

        if(now.first == 0) return now.second;

        if(vis[now.first]) continue;

        vis[now.first] = now.second;

        ll t = now.first, len = 0;

        while(t)

        {

            cnt[t % 10] = 1;

            t /= 10;

            len++;

        }

        if(len >= n) return now.second;

        for(int i=2; i<=9; i++)

            if(cnt[i])

                q.push(make_pair(now.first * i, now.second + 1));

        for(int i=0; i<=9; i++) cnt[i] = 0;

    }

    return -1;

}


int main()

{

    cin >> n >> m;

    for(int i=0; i<n; i++) nn *= 10;

    cout << bfs(m) << endl;

    return 0;
 }
