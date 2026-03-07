#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
  int answer = 0;
  //가로 원소 변수
  vector<int> w;
  //세로 원소 변수
  vector<int> h;
  for (vector<int>& card : sizes)
  {
    if (card[0] < card[1])
    {
      int temp = card[0];
      card[0] = card[1];
      card[1] = temp;
    }
  }

  for (vector<int> card : sizes)
  {
    w.push_back(card[0]);
    h.push_back(card[1]);
  }

  sort(w.begin(), w.end(),greater<>());
  sort(h.begin(), h.end(), greater<>());

  answer = w[0] * h[0];

  return answer;
}