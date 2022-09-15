#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    vector<int> day;
    for (int i = 0; i < progresses.size(); i++)
    {
        int iDay = (int)ceil(((double)100 - progresses[i]) / speeds[i]);

        day.push_back(iDay);
    }

    int sum = 1;
    int lastDay = day[0];
    for (int i = 1; i < day.size(); i++)
    {
        if (lastDay >= day[i]) sum++;
        else
        {
            answer.push_back(sum);
            sum = 1;
            lastDay = day[i];
        }

        if (i == day.size() - 1)
        {
            answer.push_back(sum);
        }
    }

    return answer;
}