#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    vector<int> result;
    int answer = 0;

    
    for (int i = 0 ; i < absolutes.size(); i++)
    {
        if (signs[i] == true)
        {
            result.push_back(absolutes[i]);
        }
        else
        {
            result.push_back(-absolutes[i]);
        }
    }

    for (auto& num : result)
    {
        answer += num;
    }

    return answer;
}