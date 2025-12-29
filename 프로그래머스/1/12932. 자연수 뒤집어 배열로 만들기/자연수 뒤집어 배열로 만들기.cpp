#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    if (n < 10000000000 && n>0)
    {
        string s = to_string(n);
        
        for (int i = s.size()-1; i >=0 ;i--)
        {
            answer.push_back((int)s[i] - 48);
        }
    }

    return answer;
}