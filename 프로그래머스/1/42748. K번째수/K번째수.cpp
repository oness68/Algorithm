#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
	int begin;
	int end;
	int order;


	for (auto it:commands)
{
	begin = it[0]-1;
	end = it[1]-1;
	order = it[2]-1;

	vector<int> temp;
	for (int i = begin; i <= end; i++)
	{
		temp.push_back(array[i]);
	}
	sort(temp.begin(), temp.end());

	answer.push_back(temp[order]);
}





    return answer;
}