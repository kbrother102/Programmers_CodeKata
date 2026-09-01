#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
  string answer = "";
  
  //카드뭉치에서 카드를 순서대로 한장씩
  //한번쓴건 다시 사용x
  //사용하지 않고 다음 순서로 넘어가기 안됨
  //주어진 카드 순선 바꾸기 안됨
  //각 카드뭉치의 길이 1~10
  //goal의 길이 2~ card1+card2
  //------------------------------
  
  //아이디어
  // goal 을 cards1과 card2 와 비교?
  // 사용된 단어는 제거, 하나씩 비교하면서 대응안되면 no
  
  for (int i = 0; i < goal.size(); i++)
  {
    if (goal[i] == cards1[0])
    {
      cards1.erase(cards1.begin());
      continue;
    }
    else if (goal[i] == cards2[0])
    {
      cards2.erase(cards2.begin());
      continue;
    }
    else
    {
      answer = "No";
      return answer;
    }

  }
  
  
  answer = "Yes";
  return answer;
}