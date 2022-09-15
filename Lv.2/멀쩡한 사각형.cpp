#include <iostream>
#include <cmath>

using namespace std;

long long solution(int w, int h) {
    long long answer = 0;

    double b = ((double)h * -1) / w;

    for (int i = 1; i < w; i++)
        answer += floor(b * i + h);

    return answer * 2;
}