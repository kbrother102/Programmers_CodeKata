#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string su = "수";
    string bak = "박";
    int length=0;

    while (length != n)
    {
        if (length % 2 == 1)
        {
            answer += bak;
        }
        else if (length % 2 == 0)
        {
            answer += su;
        }

        length++;
    }
    

    
    return answer;
}