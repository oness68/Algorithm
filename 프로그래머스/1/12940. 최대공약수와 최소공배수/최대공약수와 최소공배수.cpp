#include <string>
#include <vector>
using namespace std;
int func(int a, int b)
{
    int r=1;
    int bigger;
    int small;

    if (a > b)
    {
        bigger = a;
        small = b;
    }
    else
    {
        bigger = b;
        small = a;

    }



    while (r != 0)
    {
        r = bigger % small;
        bigger = small;
        small = r;
    }

    return bigger;
}


vector<int> solution(int n, int m) {
    vector<int> answer;
   
    int temp = func(n, m);
    
    answer.push_back(temp);

    int tempb = (n * m) / temp;

    answer.push_back(tempb);

    return answer;
}