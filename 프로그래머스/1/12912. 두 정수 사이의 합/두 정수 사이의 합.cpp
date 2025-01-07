#include <string>
#include <vector>

using namespace std;
long long solution(int a, int b) {

    long long answer = 0;
    int high = 0;
    int low = 0;
    bool same = false;
    if (a > b)
    {
        high = a;
        low = b;
    }
    else if (a == b)
    {
        same = true;
        answer = a;
    }
    else
    {
        high = b;
        low = a;
    }
    for (int i = low; i <= high&&same ==false; i++)
    {
        answer += i;
    }

   
    return answer;
}
