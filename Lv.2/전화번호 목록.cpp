#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {

    sort(phone_book.begin(), phone_book.end());

    bool answer;

    for (int i = 0; i < phone_book.size() - 1; i++)
    {
        if (phone_book[i + 1].find(phone_book[i]) == 0)
        {
            answer = false;
            return answer;
        }
        else if (phone_book[i + 1].find(phone_book[i]) == string::npos)
            answer = true;
    }

    return answer;
}