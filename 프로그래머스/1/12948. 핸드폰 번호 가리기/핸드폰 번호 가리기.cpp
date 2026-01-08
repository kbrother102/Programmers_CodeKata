#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    string temp;
    for (int i = 0; i < 4; i++)
    {
        temp += *(phone_number.end() - 1);
        phone_number.pop_back();
    }

    for(auto& ch: phone_number)
    {
        ch = '*';
    }
   
    for (int i = 0; i < 4; i++)
    {
        phone_number.push_back(temp[3-i]);
    }
    answer = phone_number;
    return answer;
}