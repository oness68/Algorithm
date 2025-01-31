#include <string>
#include <vector>

using namespace std;

string FindNumber(string str ,bool* flag)
{
    string value=str;
    string result="";
    vector<string> number =
    {
        "zero","one","two","three","four","five","six","seven","eight","nine"
    };

    for (int i = 0; i < number.size(); i++)
    {
        if (value.find(number[i]) != string::npos)
        {
            result = value.replace(value.find(number[i]), number[i].length(), to_string(i));
            return result;
        }
        
        
    }
    result = value;
    *flag = true;
    return result;
    
   
}

int solution(string s) {
    int answer = 0;
    string str=s;

    bool flag = false;

    while (!flag)
    {
        str=FindNumber(str, &flag);
        
    }

    answer = stoi(str);



    return answer;
}
