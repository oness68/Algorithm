#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
       int answer = 0;
    vector<string> substring;
    vector<long long> invert;

    long long number = stoll(p);
    int begin = 0;
    int count = 0;
    for (int i = p.size()-1; i < t.size(); i++)
    {
        substring.push_back(t.substr(begin, p.size()));
        begin++;
    }
    

    for (int i = 0; i < substring.size(); i++)
    {
        invert.push_back(stoll(substring[i]));
    }

    for (int i = 0; i < invert.size(); i++)
    {
        if (number >= invert[i])
        {
            count++;
        }
    }

    answer = count;


    return answer;
}

