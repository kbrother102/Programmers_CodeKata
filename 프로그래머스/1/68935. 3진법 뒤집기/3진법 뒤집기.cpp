#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> thr;
    
    while (n >= 1)
    {
        thr.push_back(n % 3);
        n = n / 3;
    }
  //1, 3, 3^2, 3^3, 3^4
    int vsize = thr.size();
    for (int i = 0 ; i < vsize ; i++)
    {
        answer += thr[thr.size()-1] * pow(3, i);
        thr.pop_back();
    }


    return answer;
}