#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    int index = s.size();

    if (index % 2 == 0)
    {


        index /= 2;
        answer = s.substr(index - 1, 2);
    }

    else
    {
        index /= 2;

        answer = s.substr(index , 1);
    }


    return answer;
}
