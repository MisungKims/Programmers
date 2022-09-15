#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> c;

    for (int i = 0; i < s.size(); i++)
    {
        if (c.empty()) c.push(s[i]);
        else
        {
            if (c.top() == '(' && s[i] == ')')
                c.pop();
            else c.push(s[i]);
        }
    }

    return c.empty();
}