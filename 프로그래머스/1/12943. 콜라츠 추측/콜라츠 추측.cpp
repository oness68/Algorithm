#include <string>
#include <vector>

using namespace std;

int solution(int num) {

    int answer = 0;
    long long number = num;
    while (1)
    {
        if (answer >= 500 || number == 1)
        {
            if (answer >= 500)
                answer = -1;
            break;

        }
        if (number % 2 == 0)
        {
            number = number / 2;
            answer++;
        }
        else
        {
            number = (number * 3) + 1;
            answer++;
        }
    }

    
    
    return answer;
}