#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section)
{
  int answer = 0;
  int idx = 1;
  int sec = 0;
  while (idx<=n)
  {
   //일반진행, 하나씩 검사 하나가 안칠해진곳이 나온다면(section에서 표시) 한번 칠하고 m-1만큼 더한 수를 다음 인덱스로
    if (section[sec] == idx )
    {
      sec++;
      idx += m;
      answer++;
      while (section[sec] < idx )
      {
        sec++;
      }
      continue;
    }
    
    idx++;
  }



  return answer;
}
