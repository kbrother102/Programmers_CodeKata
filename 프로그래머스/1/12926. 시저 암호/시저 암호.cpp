#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
  string answer = "";
  for (const char c : s)
  {
    unsigned char newchar;
    newchar = c + n;
    if (c >= 'A' && c <= 'Z') // 대문자일경우
    {
      if (newchar > 90)
      {
        newchar = newchar - 26;
      }
      answer += newchar;
    }

    if (c >= 'a' && c <= 'z') // 소문자일경우
    {
      if (newchar > 122)
      {
        newchar = newchar - 26;
      }
      answer += newchar;
    }
    
    if (c == ' ') // 공백일경우
    {
      answer += c;
    }
    

  }

  return answer;
}