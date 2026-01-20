#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    //48~57
    
    if (!(s.size() == 4 || s.size() == 6))
    {
        return false;
    }
    if (s.size() == 4 || s.size() == 6)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (!(s[i] <= 57 && s[i] >= 48))
            {
                return false;
            }
        }
    }
    return answer;
}