#include <string>
#include <vector>
#include<algorithm>
using namespace std;


vector<int> solution(vector<int> array, vector<vector<int>> commands) {
  vector<int> answer;

  // commands[0][0] commands[0][1]로 자르고, commands[0][2]번째 숫자를 뽑아낸다.
  //이걸 commands[i]에 대해 실행한다.

  for (int i = 0;i < commands.size();i++)
  {
    int begin = commands[i][0] - 1; //"번째" 니까 인덱스로 쓰려면 -1
    int end = commands[i][1]; // 끝벡터는 포함이 안되기 때문에 그대로 씀 [시작, 끝) 임
    int pick = commands[i][2] - 1;
  
    vector<int> sub(array.begin() + begin, array.begin() + end);
    sort(sub.begin(), sub.end());
    answer.push_back(sub[pick]);
  }

  return answer;
}
