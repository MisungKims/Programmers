#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}

bool cmpCount(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;

    unordered_map<string, vector<pair<int, int>>> playlist;
    unordered_map<string, int> count;

    for (int i = 0; i < genres.size(); i++)
    {
        playlist[genres[i]].push_back(make_pair(plays[i], i));
        count[genres[i]] += plays[i];
    }

    for (auto& a : playlist)
        sort(a.second.begin(), a.second.end(), cmp);

    vector<pair<string, int>> countVec;
    countVec.assign(count.begin(), count.end());
    sort(countVec.begin(), countVec.end(), cmpCount);

    for (int i = 0; i < countVec.size(); i++)
    {
        for (int j = 0; (j < playlist[countVec[i].first].size()) && (j < 2); j++)
        {
            answer.push_back(playlist[countVec[i].first][j].second);
        }
    }

    return answer;
}