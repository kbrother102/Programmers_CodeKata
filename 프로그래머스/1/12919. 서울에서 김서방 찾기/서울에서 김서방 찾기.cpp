#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {

    string answer = "";

    int cnt = 0;
    for (auto& serch : seoul)
    {
        
        if (serch == "Kim")
        {
            return "김서방은 " + std::to_string(cnt) + "에 있다";
        }
        cnt++;
    }

    return answer;
}