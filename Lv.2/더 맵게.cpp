#include <string>
#include <vector>
#include <algorithm> 
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < scoville.size(); i++)
        pq.push(scoville[i]);

    int s = 0;
    while (pq.top() < K)
    {
        if (pq.size() < 2) return -1;

        answer++;

        int one = pq.top();
        pq.pop();

        int two = pq.top();
        pq.pop();

        s = one + two * 2;

        pq.push(s);
    }

    return answer;
}