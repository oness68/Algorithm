#include <string>
#include <vector>
#include<algorithm>
using namespace std;


vector<int> solution(vector<int> arr) {
    vector<int> answer;
 vector<int>::iterator it;
 int min=arr[0];
 if (arr.size()==1)
 {
     answer.push_back(-1);
     return answer;
 }
 answer = arr;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    it = find(answer.begin(), answer.end(), min);
    answer.erase(it);



    return answer;
}