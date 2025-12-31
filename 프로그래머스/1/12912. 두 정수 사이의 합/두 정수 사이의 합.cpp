#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long sum=0;
    if(a==b)
        return a;
    else if(a>b)
    {
        while(a>=b)
        {sum += b++;}
        return sum;    
    }
    else if(b>a)
    {
        while(a<=b)
        {sum += a++;}
        return sum;    
    }
    
    return sum;
}