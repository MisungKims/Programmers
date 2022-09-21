#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first <= b.first;
}

bool isMaxVal(vector<pair<int, int>> v, int i) {
    auto max = max_element(v.begin(), v.end(), compare);
    return v[i].first == max->first;
}


int solution(vector<int> priorities, int location) {
    int answer = 0;

    vector<pair<int, int>> vec;
    vector<int> order;

    for (int i = 0; i < priorities.size(); i++)
        vec.push_back(make_pair(priorities[i], i));

    for (int i = 0; i < vec.size(); i++)
    {
        auto max = max_element(vec.begin(), vec.end(), compare);
        if (vec[i].first == max->first)
        {
            order.push_back(vec[i].second);
            vec.erase(vec.begin() + i);
            i--;
        }
        else
        {
            vec.push_back(vec[i]);
            vec.erase(vec.begin() + i);
            i--;
        }
    }

    return find(order.begin(), order.end(), location) - order.begin() + 1;
}