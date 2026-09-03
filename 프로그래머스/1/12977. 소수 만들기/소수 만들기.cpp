#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
  int answer = -1;

  int prime_num = 0;
  //세개를 더해서 소수가 나오는 경우의 수
  // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
  
  vector<int> plus_num;
  //일단 서로다른 세개를 다 더해보는 반복문
  
  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = i + 1; j < nums.size(); j++)
    {
      for (int k = j + 1; k < nums.size(); k++)
      {
        int result = nums[i] + nums[j] + nums[k];
        plus_num.push_back(result);
      }
    }
  }
  bool bDetermined = false;
  //소수 판별
  for (auto num : plus_num)
  {
    for (int i = 2; i < num; i++)
    {
      bDetermined = false;
      if (num % i == 0)
      {
       break;
      }
      bDetermined = true;
    }
    
    if (bDetermined)
    {
      prime_num++;
    }
  }
  
  for (auto num : plus_num)
  {
    cout << num <<" ";
  }
  answer = prime_num; 
  return answer;
}