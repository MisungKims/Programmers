#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;

    queue<int> q;

    int i = 0, sum = 0;
    while (true)
    {
        if (i == truck_weights.size())
        {
            answer += bridge_length;
            break;
        }

        answer++;

        if (q.size() == bridge_length)
        {
            sum -= q.front();
            q.pop();
        }


        if (sum + truck_weights[i] <= weight)
        {
            q.push(truck_weights[i]);
            sum += truck_weights[i];
            i++;
        }
        else q.push(0);

    }

    return answer;
}