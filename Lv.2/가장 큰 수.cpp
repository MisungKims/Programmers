#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(const string& a, const string& b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";

    vector<string> s;

    for (auto a : numbers)
        s.push_back(to_string(a));

    sort(s.begin(), s.end(), cmp);

    for (auto num : s)
        answer += num;

    if (s.at(0) == "0") answer = "0";

    return answer;
}