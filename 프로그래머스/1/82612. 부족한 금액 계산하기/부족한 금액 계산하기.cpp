using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long total =0;
    
    for(int i = 1 ; i<=count ; i++)
    {
        total += price*i;
    }
    long long pay = money - total ;
    if(pay>0)
    {
        return 0;
    }
    if(pay < 0)
    {
        return -pay;
    }

    
}