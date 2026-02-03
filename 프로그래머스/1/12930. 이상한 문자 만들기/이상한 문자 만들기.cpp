#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    //65 A ~ 90 Z
    // +- 32
    //97 a ~ 122 z
    int SpaceIndex = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == ' ')
        {
            SpaceIndex = 0;
            continue;
        }


        if (SpaceIndex % 2 == 0)
        {
            if(s[i]>='a')
            {
                s[i] -= 32;
            }
        }
        else
        {
            if (s[i] < 'a')
            {
                s[i] += 32;
            }
        }





        SpaceIndex++;
    }

    answer = s;

    return answer;
}