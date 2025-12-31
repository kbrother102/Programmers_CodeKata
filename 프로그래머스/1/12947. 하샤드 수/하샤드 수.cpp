#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int divider = 0;
    bool answer = false;
    if (x >= 1 && x <= 10000)
    {
        int x2 = x;
        while(x2>=1)
        {
            
            divider += x2 % 10;
            x2 =(int)(x2 / 10);
        }
        
        if (x % divider == 0)
            answer = true;
        
    }
    
    return answer;
}
int main()
{
    solution(153);
}