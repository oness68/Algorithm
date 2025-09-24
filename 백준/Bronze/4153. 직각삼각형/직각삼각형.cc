#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main()
{
	bool flag = false;
	
	while (1)
	{
		vector<int> number(3);

		for (int i = 0; i < number.size(); i++)
		{
			int temp;
			cin >> temp;
			number[i] = temp;

		}

		for (auto i : number)
		{
			if (i != 0)
			{
				flag = false;
				break;
			}
			flag = true;
		}

		if (flag)
		{
			return 0;
		}

		sort(number.begin(), number.end());

		if (number[0] * number[0] + number[1] * number[1] == number[2] * number[2])
		{
			cout << "right" << "\n";
		}
		else
		{
			cout << "wrong" << "\n";
		}
	}

	return 0;
}