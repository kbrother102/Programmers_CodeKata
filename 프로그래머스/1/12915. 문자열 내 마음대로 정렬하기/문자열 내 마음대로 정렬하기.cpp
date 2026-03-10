#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
  vector<string> answer;
  //n 번째 문자를 뽑아서 벡터에 저장

  vector<unsigned char> sortchar;
  for (int i = 0; i < strings.size()-1; i++)
  {
    int min = i;

    for (int j = i + 1; j < strings.size(); j++)
    {
      if (strings[j][n] < strings[min][n])
      {
        min = j;
      }
    }

    swap(strings[i], strings[min]);
  }

  for (int i = 0; i < strings.size()-1; i++)
  {
    
      for (int j = 0; j < strings.size() - 1; j++)
      {
        if (strings[j][n] == strings[j + 1][n])
        {
          if (strings[j] > strings[j + 1])
          {
            swap(strings[j], strings[j + 1]);
          }
        }
      }
    
  }
  answer = strings;
  return answer;
}