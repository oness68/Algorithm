#include <string>
#include <vector>
#include<math.h>


using namespace std;
int solution(int n) {
    int answer = 0;
    int tempA=n;
    vector<int> invert_3;

    while (tempA != 0)
    {
        int rest=tempA%3;
        
        tempA = (tempA - rest) / 3;
        invert_3.push_back(rest);
    }

    int pownum = 0;

    for (int i = invert_3.size()-1; i >= 0; i--)
    {

        if (pownum == 0)
        {
            answer += invert_3[i];
            
        }
        else
        {
            for (int j = 0; j < invert_3[i]; j++)
            {
                answer += pow(3, pownum);
            }
        }

        pownum++;
    }

    return answer;
}