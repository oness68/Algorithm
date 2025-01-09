#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    bool flag=false;
    for (int i = 0; i < 10; i++)
    {
        if (find(numbers.begin(), numbers.end(), i) == numbers.end())
        {
            flag = true;
            answer += i;
        }
    }

    if (!flag)
    {
        answer = -1;
    }

    return answer;
}