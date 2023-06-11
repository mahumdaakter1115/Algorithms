
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> arr;

    for (int i = 1; i <= n; i++)
    {
        int elm;
        cin >> elm;
        arr.push_back({elm, i});
    }

    sort(arr.begin(), arr.end());

    int left = 0, right = n - 1;

    while (left < right)
    {
        int sum = arr[left].first + arr[right].first;
        if (sum == x)
        {
            cout << arr[left].second << " " << arr[right].second << endl;

            return 0;
        }
        else if (sum < x)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
