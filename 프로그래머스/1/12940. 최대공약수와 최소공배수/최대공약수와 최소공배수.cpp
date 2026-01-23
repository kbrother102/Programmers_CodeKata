#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a;
    int b;
    int r;
    if (n > m)
    {
        a = n;
        b = m;
    }
    else
    {
        a = m;
        b = n;
    }

    while (true)
    {
        r = a % b;

        if (r != 0)
        {
            a = b;
            b = r;
        }
        if (r == 0)
        {
            answer.push_back(b);
            break;
        }
    }
    answer.push_back(n * m / b);

    return answer;
}

