#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    bool flag = true;
    for (int i =0;i<n;i++)
    {
        if (flag)
        {
            answer += "수";
            flag = !flag;
        }
        else
        {
            answer += "박";
            flag = !flag;

        }
    }

    return answer;
}