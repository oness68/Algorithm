#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
	string answer = "";
	string reverse = "";
	

	for (int i = 1; i < food.size(); i++)
	{
		for (int j = 0; j < food[i]/2 && food[i]/2>0 ; j++)
		{
			answer += to_string(i);
		}

	}
	reverse = answer;

	sort(reverse.begin(), reverse.end(), greater<>());

	answer += "0";


	answer += reverse;



	return answer;
}