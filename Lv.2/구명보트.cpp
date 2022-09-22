#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;

    sort(people.begin(), people.end());

    int back = 0;
    int idx = 0;
    while (people.size() > idx)
    {
        back = people.back();
        people.pop_back();

        if (back + people[idx] <= limit) idx++;

        answer++;
    }

    return answer;
}