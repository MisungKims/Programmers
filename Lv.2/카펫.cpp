#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    int weight, height;
    for (int i = 1; i <= yellow; i++)
    {
        if (yellow % i == 0)
        {
            if (yellow / i < i)
            {
                weight = i;
                height = yellow / i;
            }
            else
            {
                weight = yellow / i;
                height = i;
            }

            if ((weight + 2) * 2 + height * 2 == brown)
            {
                answer.push_back(weight + 2);
                answer.push_back(height + 2);
                break;
            }
        }
    }

    return answer;
}