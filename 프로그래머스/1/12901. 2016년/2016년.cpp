#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
  string answer = "";
  vector<string> DayofWeak;

  DayofWeak.push_back("FRI"); // 인덱스 [0] 은 금
  DayofWeak.push_back("SAT");
  DayofWeak.push_back("SUN");
  DayofWeak.push_back("MON");
  DayofWeak.push_back("TUE");
  DayofWeak.push_back("WED");
  DayofWeak.push_back("THU");
  //2016년 1월 1일은 금요일
  // 2016년 a월 b일은 무슨 요일일까
  //SUN, MON, TUE, WED, THU, FRI, SAT

  //아이디어
  // 7일마다 같은 요일 , +7 하면 제자리
  // 한달의 일 수 보다 많으면 빼줘야함 
  // 1월은 31일  2월은 29일(윤년) 3월 31일 4월 30, 5-31, 6-30, 7-31, 8-31, 9-30, 10-31, 11-30, 12-31
  // 1월 1일 금요일 +7 -> 1월 8일 금요일 -> ... -> 1월 36일 금요일 -31 -> 2월 5일 금요일
  // 받은 날짜부터 7일씩 빼서 1월 1일~7일 까지 돌아가서 확인
  
  int temp;
  while (a >0)
  {
    temp = b;
    b -= 7;
    if (b<=0)
    {
      switch (a)
      {
      case 1:
        a = -1;
        b +=7; 
        break;
      case 2:
        b += 31;
        a--;
        break;
      case 3:
        b +=29;
        a--;
        break;
      case 4:
        b +=31;
        a--;
        break;
      case 5:
        b +=30;
        a--;
        break;
      case 6:
        b +=31;
        a--;
        break;
      case 7:
        b +=30;
        a--;
        break;
      case 8:
        b +=31;
        a--;
        break;
      case 9:
        b +=31;
        a--;
        break;
      case 10:
        b +=30;
        a--;
        break;
      case 11:
        b +=31;
        a--;
        break;
      case 12:
        b +=30;
        a--;
        break;
      }
    }
  }
  
  for (int i = 0; i < 7; i++)
  {
    if (temp -1 == i)
    {
      answer = DayofWeak[i];
    }
  }

  return answer;
}
