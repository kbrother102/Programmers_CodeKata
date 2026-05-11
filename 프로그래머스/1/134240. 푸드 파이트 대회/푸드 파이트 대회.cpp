#include <iostream>


#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
  string answer = "";
  //일단 n번 음식이 짝수인지 판별, 홀수라면 -1
  for (int i = 1; i < food.size(); i++)
  {
    if (food[i] % 2 == 1)
    {
      food[i] -= 1;
    }
  }
  // 각 음식은 /2 번 반복 
  
  for (int i = 1; i < food.size() ; i++)
  {
    for(int j = food[i]/2; j > 0; --j)
    {
      
      string foodnum = to_string(i);
      answer += foodnum;

    }
  }
  
  answer += "0";
  
  //역순으로 다시 반복
  for (int i = food.size() - 1 ; i > 0 ; --i)
  {
    for (int j = food[i]/2; j > 0; --j)
    {

      string foodnum = to_string(i);
      answer += foodnum;

    }
  }


  return answer;
}