#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;

    int sum = 0;
    int j = 1;
    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        sum += i;

        while (sum > n) sum -= j++;
        if (sum == n) answer++;
    }

    return n != 1 ? answer : 1;
}