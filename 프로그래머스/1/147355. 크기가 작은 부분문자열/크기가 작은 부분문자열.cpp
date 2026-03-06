#include <string>
#include <vector>
#include <iostream>
using namespace std;
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(string t, string p) {
 //필요한 준비물
 // string to intager
  // char* -> string
  //문자열 크기 구하기
  // 나오는 집합 개수 t-p+1
  
  int answer = 0;
  string t1 = t;
  string p1 = p;

  string t2;
  vector<string> t3;
  int tsize = t1.size();
  int psize = p1.size();

  int setnum = tsize - psize + 1;

  //t1의 원소를 p1개수 만큼 끊어서 t2로 만든걸 setnum개 뽑아내 각 set를 t3에 저장한다

    for (int j = 0; j <= tsize - psize;j++)
    {
      for (int i = 0; i < psize; i++)
      {
        t2 += t1[j + i];
      }

      t3.push_back(t2);
      t2 = "";
    }


  //t3의 모든 원소를 p1과 비교한다.
  for (string t3member : t3)
  {
    if (stoll(t3member) <= stoll(p1))
    {
      answer++;
    }

  }

  
  return answer;
}