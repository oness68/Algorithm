#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    vector<int> sum;

    for (int i = 0; i < absolutes.size(); i++)
    {
        if (signs[i])
        {
            sum.push_back(absolutes[i]);
        }
        else
            sum.push_back(absolutes[i] * -1);
    }

    for (int i = 0; i < sum.size(); i++)
    {
        answer += sum[i];
    }


    return answer;
}