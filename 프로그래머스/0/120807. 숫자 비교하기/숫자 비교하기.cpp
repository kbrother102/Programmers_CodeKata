#include <string>
#include <vector>
using namespace std;
int solution(int num1, int num2) {
    if( 0<=num1&&num1<=10000 &&   0<=num2&&num2<=10000)
    {
        int answer = -1;
        if(num1==num2) // 1 반환
            answer = num1==num2;
        
        return answer;
    }
    
}