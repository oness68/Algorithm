#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;



	int i = 0;
	int j = i + 1;
	int k = j + 1;

	int count = 0;

	for (i ; i < number.size(); i++)
	{

		for (j = i+1 ; j <number.size(); j++)
		{
			
			for (k = j+1 ; k < number.size(); k++)
			{
				if (number[i] + number[j] + number[k] == 0)
				{
					count++;
				}

			}

			
		}
	}

	answer = count;

    return answer;
}
