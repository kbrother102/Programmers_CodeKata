#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
  int answer = 0;
  //최소 교환 콜라 병 개수 a
  //a를 주면 받는 콜라병 개수 b
  //가진 빈 병의 개수 n

  /*
   20 /2 -> 10(*1) : 총 10개
   10 /2 -> 5 : 총 10+5 = 15개
   5 / 2 -> 2 (+1) : 총 10+5+2 = 17개
   2(+1) / 2 -> 1 (+1) : 총 18개
   1(+1) / 2 -> 1 : 총 19개 
   
   일반화 
   
   mod a 를 쓴다
   
   20 % 2 = 0
   10 % 2 = 0
   5 % 2 = 1
   3 % 2 = 1
   2 % 2 = 0
   
   계산 후 결과값을 m 이라고 하면 
   m /a * b(받은 콜라) + m % a(남은콜라) = m'

  m이 a보다 작을때 까지 반복
  */

  int m = n / a * b;
  answer += m;
  n = m + n % a;

 

  while (n >= a)
  {
    m = n / a * b;
    answer += m;
    n = m + n % a;
    
  }


  return answer;
}