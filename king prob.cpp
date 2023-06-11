#include<bits/stdc++.h>
using namespace std;

int findKingIndex(const std::vector<int>& nums) {
    int n = nums.size();
    int totalSum = 0;


    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {

        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> nums(N);
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }

        int kingIndex = findKingIndex(nums);
        cout << kingIndex << std::endl;
    }

    return 0;
}

