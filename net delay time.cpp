class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
     const int INF = numeric_limits<int>::max();

               vector<vector<pair<int, int>>> graph(n + 1);
        for (const auto& time : times) {
            int source = time[0];
            int target = time[1];
            int weight = time[2];
            graph[source].push_back({target, weight});
        }

        vector<int> distance(n + 1, INF);
        distance[k] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});

            while (!pq.empty()) {
            int currNode = pq.top().second;
            int currDist = pq.top().first;
            pq.pop();

            if (currDist > distance[currNode]) {
                continue;
            }

            for (const auto& edge : graph[currNode]) {
                int nextNode = edge.first;
                int weight = edge.second;
                int newDist = currDist + weight;

        if (newDist < distance[nextNode]) {
                    distance[nextNode] = newDist;
                    pq.push({newDist, nextNode});
                }
            }
        }


        for (int i = 1; i <= n; i++) {
            if (distance[i] == INF) {
                return -1;
            }
        }


        int maxTime = 0;
        for (int i = 1; i <= n; i++) {
            maxTime = max(maxTime, distance[i]);
        }

        return maxTime;
    }
};
