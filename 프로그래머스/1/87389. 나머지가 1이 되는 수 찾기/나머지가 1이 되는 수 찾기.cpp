#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int temp = -1;
        if (n >= 3 && n <= 1000000)
    {
        for (int i = n; i != 1; i--)
        {
            if (n % i == 1)
            {
                temp = i;
            }

        }
    }
    
    
        
    int answer = temp;
    return answer;
}