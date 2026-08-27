#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
  vector<int> answer;
  //---------------------------------------
  //노래 하루에 한명
  //점수 부여
  //지금까지 출연 가수들의 점수 중 상위 k번째 이내면 명예의전당
  //k일 까지는 모든 가수가 명예의 전당에 오름
  //k일 이후에는 명예의 전당 k번째(꼴등) 보다 높으면 기존 순위 교체
  //꼴등을 알려주는 프로그램을 작성
  //-------------------------------------
  //3 ≤ k ≤ 100
  //7 ≤ score의 길이 ≤ 1,000
  //0 ≤ score[i] ≤ 2,000
  //------------------------------------
  vector<int> HoF;
  
  
  
  for (int i = 0; i < score.size(); ++i)  
  {
    HoF.push_back(score[i]);
    
    sort(HoF.begin(), HoF.end(), greater<>());
    
    if (HoF.size() > k)
    {
      HoF.resize(k);
    }
    answer.push_back(HoF.back());
  }


  return answer;
}