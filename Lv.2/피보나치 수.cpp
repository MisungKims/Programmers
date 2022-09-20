#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    long long answer = 0;

    long long p1 = 0, p2 = 1;

    for (long long i = 0; i < n - 1; i++)
    {
        answer = p1 + p2;
        p1 = p2 % 1234567;
        p2 = answer % 1234567;
    }

    return answer % 1234567;
}