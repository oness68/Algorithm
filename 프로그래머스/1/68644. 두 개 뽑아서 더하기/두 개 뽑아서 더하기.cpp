#include <string>
#include <vector>
#include <set>
using namespace std;
vector<int> solution(vector<int> numbers) {
	

	set<int> result;
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = 0; j < numbers.size(); j++)
		{
			if (i == j) continue;

			result.insert(numbers[i] + numbers[j]);

		}
	}

	vector<int> answer;

	for (auto it : result)
	{
		answer.push_back(it);
	}

	return answer;

}
