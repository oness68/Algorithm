#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {

    string lastnumber;
    string answer = phone_number;

    if (phone_number.size() > 4)
    {
        answer = "";
        lastnumber = phone_number.substr(phone_number.size() - 4, phone_number.size() - 1);

        for (int i = 0; i < phone_number.size() - 4; i++)
        {
            answer += "*";
        }
        answer += lastnumber;
    }

   
    
    return answer;
}
