#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int index=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[index] > arr[i])
        {
            index = i;
        }
    }

    arr.erase(arr.begin() + index);

    if (arr.empty())
    {
        arr.push_back(-1);
    }
    answer = arr;
    return answer;
}