#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = s;

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            count = 0;
            continue;
        }

        if (count % 2 == 0)
        {
            if (s[i] >= 'a')
            {
                answer[i] = s[i] - 32;
            }
            
        }
        else
        {
            if (s[i] <= 'Z')
            {
                answer[i] = s[i] + 32;
            }
        }
        count++;
        
    }


    return answer;
}

