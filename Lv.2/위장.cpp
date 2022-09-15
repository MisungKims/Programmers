#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;

    map<string, int> hash_map;

    for (int i = 0; i < clothes.size(); i++)
    {
        hash_map[clothes[i][1]]++;
    }


    for (auto iter = hash_map.begin(); iter != hash_map.end(); iter++)
    {
        answer *= iter->second + 1;
    }

    return answer - 1;

}