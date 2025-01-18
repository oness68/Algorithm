#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;

	vector<int> number;

	for (int i = left; i <= right; i++)
	{
		number.push_back(i);
	}


	for (int i = 0; i<number.size() ; i++)
	{
		int count = 0;
		for (int j = 1; j <=number[i]; j++)
		{
			if (number[i] % j == 0)
			{
				count++;
			}
		}

		if (count % 2 == 0)
		{
			answer += number[i];
		}
		else
		{
			answer -= number[i];
		}
	}



    return answer;
}