#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
  vector<int> answer;

  vector<int> temp;
  for (int i = 0; i < numbers.size(); i++)
  {
    for (int j = i + 1; j < numbers.size(); j++)
    {
      if (find(temp.begin(), temp.end(), numbers[i] + numbers[j]) == temp.end())//해당 값이 없다면
      {
        temp.push_back(numbers[i] + numbers[j]); //배열에 추가
      }
      

    }
  }
  
  sort(temp.begin(), temp.end());

  answer = temp;

  return answer;
}