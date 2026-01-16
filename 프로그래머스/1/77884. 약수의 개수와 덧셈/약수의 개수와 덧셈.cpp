#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int num;
    int divider;
    int cnt = 0;

    for(num = left;num<=right;num++ )
    {
        for (int divider = 1;divider <= num;divider++)
        {
            if (num % divider == 0)
            {
                cnt++;
            }
        }
        if (cnt % 2 == 0)
        {
            answer += num;
            cnt = 0;
        }
        else
        {
            answer -= num;
            cnt = 0;
        }
    }


    return answer;
}