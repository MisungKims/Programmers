#include <string>
#include <stack>

using namespace std;

int BinaryOneNum(int X)
{
    stack<int> my_s;
    while (X != 0)
    {
        if (X % 2 == 1)
            my_s.push(1);
        else
            my_s.push(0);

        X /= 2;
    }

    int result = 0;
    while (!(my_s.empty()))
    {
        if (my_s.top() == 1) result++;
        my_s.pop();
    }

    return result;
}

int solution(int n) {
    int num = n;
    int b = BinaryOneNum(n);

    while (true)
    {
        num++;
        if (BinaryOneNum(num) == b) break;
    }

    return num;
}

////////////////////////////
//#include <bitset>
//
//using namespace std;
//
//int solution(int n) {
//    int num = bitset<20>(n).count();
//
//    while (bitset<20>(++n).count() != num);
//    return n;
//}