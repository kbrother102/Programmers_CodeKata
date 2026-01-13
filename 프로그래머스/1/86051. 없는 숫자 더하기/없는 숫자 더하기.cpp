#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int sum = 45;
    for (auto num : numbers)
    {
        sum -= num;
    }
    int answer = sum;
    return answer;
}