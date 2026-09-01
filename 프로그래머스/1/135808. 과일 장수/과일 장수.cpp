#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score) {
  int answer = 0;
  
  //점수 1~k
  
  // 한 상자에 들어가는 사과의 수 3<= m <=10
  //사과들의 점수 score
  //한 상자에서 가장 낮은 점수를 기준으로 p*m 
  
  //높은거 부터 m개씩 끊어보자
  //사과 갯수 score.size()
 /*4 4 4 4 4 4 2 2 2 2 1 1 
  12 / 3
  4박스
  
  */
  
  
  sort(score.begin(), score.end(), greater<int>());
  int boxnum = score.size() / m;
  
  for (int i = 1; i <= boxnum; i++)
  {
    if (i*m - 1 < score.size()) //인덱스 범위
    answer += score[i*m- 1] * m ;
  }
  
  return answer;
}