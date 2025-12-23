#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    
    if(num & 1 == 1)
    {
        return "Odd";
    }
    else if(num & 1 == 0)
    {
        return "Even";
    }
    else if(num == 0)
    {
        return "Even";
    }

}