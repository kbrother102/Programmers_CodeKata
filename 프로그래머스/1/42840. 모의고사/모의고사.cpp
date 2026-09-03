#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers)
{
  vector<int> answer;
  //1번 수포자 1 2 3 4 5 반복 5
  //2번 2 1 / 2 3 /2 4 / 2 5 반복 8
  //3번 3 3 1 1 2 2 4 4 5 5  반복 10


  vector<int> Supoja1 = {1, 2, 3, 4, 5};
  vector<int> Supoja2 = {2, 1, 2, 3, 2, 4, 2, 5};
  vector<int> Supoja3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

  // 문제와 답을 매칭, 맞을때 마다 
  // 점수 올리기
  vector<int> score = {0, 0, 0};

  
  for (int i = 0; i < answers.size(); i++)
  {
    int n1 = i/5;
    if (answers[i] == Supoja1[i - 5*n1])
    {
      score[0]++;
    }
    
    int n2 = i/8;
    if (answers[i] == Supoja2[i - 8*n2])
    {
      score[1]++;
    }

    int n3 = i/10;
    if (answers[i] == Supoja3[i - 10*n3])
    {
      score[2]++;
    }
  }
  
auto maximumNum = max_element(score.begin(), score.end());
  
  for (int i = 0; i < score.size(); i++)
  {
    if (score[i] == *maximumNum)
    {
      answer.push_back(i+1);
    }
  }
  

  return answer;
}

