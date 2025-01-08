#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {

    string answer = "";

    for (int i = 0; i < seoul.size(); i++)
    {
        string temp = seoul.at(i);
        if (temp.compare("Kim") == 0)
        {
            temp = to_string(i);
            answer = "김서방은 " + temp + "에 있다";
            break;
        }
        
    }


    
    return answer;
}