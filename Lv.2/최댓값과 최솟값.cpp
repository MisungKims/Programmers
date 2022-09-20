#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";

    vector<int> v;

    int buff;
    stringstream ss;
    ss.str(s);

    while (ss >> buff)
    {
        v.push_back(buff);
    }

    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());

    return to_string(min) + " " + to_string(max);
}