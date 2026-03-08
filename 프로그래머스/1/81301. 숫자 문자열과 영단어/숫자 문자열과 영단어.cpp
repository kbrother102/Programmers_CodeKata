#include <string>
#include <vector>

using namespace std;


int solution(string s) {
  int answer = 0;

  //3개 검사, 4개 검사, 5개 검사
  //3글자 영어 one 1, two 2, six 6
  //4글자 영어 zero 0, four 4, five 5, nine 9
  //5글자 영어 three 3, seven 7, eight 8, 

  //숫자는 통과, 문자를 만나면 다음 숫자 나올때 까지 저장, 
  // 숫자를 만나면 지금까지 저장한 문자 검사 후 숫자로 변환
  // 변환된 숫자를 통과
  // 이하 반복
  string alphabet="";
  string transform;
  string checknum;
  string temp_answer;
  for (auto c : s)
  {

    if (c > 'a')
    {
      alphabet += c;
    }

    if (c <= '9' && c >= '0') //숫자라면
    {
      if (!alphabet.empty())//쌓인 문자열이 없다면 통과 -> 비어있지 않으면 실행
      {
        //쌓인 문자열을 변환
#pragma region CheckNum
        while (!alphabet.empty()) //컨테이너가 빌때까지 검사
        {
          //3개짜리 문자 검사
          checknum = "";
          for (int i = 0; i < 3;i++)
          {
            checknum += alphabet[i];
          }
          if (checknum == "one")
          {
            transform += '1';
            alphabet.erase(0, 3);
            continue;
          }
          else if (checknum == "two")
          {
            transform += '2';
            alphabet.erase(0, 3);
            continue;
          }
          else if (checknum == "six")
          {
            transform += '6';
            alphabet.erase(0, 3);
            continue;
          }


          //4개짜리 문자 검사
          checknum = "";
          for (int i = 0; i < 4;i++)
          {
            checknum += alphabet[i];
          }
          if (checknum == "zero")
          {
            transform += '0';
            alphabet.erase(0, 4);
            continue;
          }
          else if (checknum == "four")
          {
            transform += '4';
            alphabet.erase(0, 4);
            continue;
          }
          else if (checknum == "five")
          {
            transform += '5';
            alphabet.erase(0, 4);
            continue;
          }
          else if (checknum == "nine")
          {
            transform += '9';
            alphabet.erase(0, 4);
            continue;
          }


          //5개짜리 문자 검사
          checknum = "";
          for (int i = 0; i < 5;i++)
          {
            checknum += alphabet[i];
          }
          if (checknum == "three")
          {
            transform += '3';
            alphabet.erase(0, 5);
            continue;
          }
          else if (checknum == "seven")
          {
            transform += '7';
            alphabet.erase(0, 5);
            continue;
          }
          else if (checknum == "eight")
          {
            transform += '8';
            alphabet.erase(0, 5);
            continue;
          }

        }
#pragma endregion 문자를 숫자로 변환
        temp_answer += transform;

        
        //변환 컨테이너 비우기
        transform = "";
      }
      
      temp_answer += c;
      continue;
    }


  }

  //마지막에 한번 더 실행
  if (!alphabet.empty())//쌓인 문자열이 없다면 통과 -> 비어있지 않으면 실행
  {
    //쌓인 문자열을 변환
#pragma region CheckNum
    while (!alphabet.empty()) //컨테이너가 빌때까지 검사
    {
      //3개짜리 문자 검사
      checknum = "";
      for (int i = 0; i < 3;i++)
      {
        checknum += alphabet[i];
      }
      if (checknum == "one")
      {
        transform += '1';
        alphabet.erase(0, 3);
        continue;
      }
      else if (checknum == "two")
      {
        transform += '2';
        alphabet.erase(0, 3);
        continue;
      }
      else if (checknum == "six")
      {
        transform += '6';
        alphabet.erase(0, 3);
        continue;
      }


      //4개짜리 문자 검사
      checknum = "";
      for (int i = 0; i < 4;i++)
      {
        checknum += alphabet[i];
      }
      if (checknum == "zero")
      {
        transform += '0';
        alphabet.erase(0, 4);
        continue;
      }
      else if (checknum == "four")
      {
        transform += '4';
        alphabet.erase(0, 4);
        continue;
      }
      else if (checknum == "five")
      {
        transform += '5';
        alphabet.erase(0, 4);
        continue;
      }
      else if (checknum == "nine")
      {
        transform += '9';
        alphabet.erase(0, 4);
        continue;
      }


      //5개짜리 문자 검사
      checknum = "";
      for (int i = 0; i < 5;i++)
      {
        checknum += alphabet[i];
      }
      if (checknum == "three")
      {
        transform += '3';
        alphabet.erase(0, 5);
        continue;
      }
      else if (checknum == "seven")
      {
        transform += '7';
        alphabet.erase(0, 5);
        continue;
      }
      else if (checknum == "eight")
      {
        transform += '8';
        alphabet.erase(0, 5);
        continue;
      }

    }
#pragma endregion 문자를 숫자로 변환
    temp_answer += transform;


    //변환 컨테이너 비우기
    transform = "";
  }

  answer = stoi(temp_answer);

  return answer;
}