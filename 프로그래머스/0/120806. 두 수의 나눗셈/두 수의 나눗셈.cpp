#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float result = (float)num1 / (float)num2;
    int answer = result * 1000;
    return answer;
}
