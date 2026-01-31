#include<iostream>
#include<string>
using namespace std;


int main()
{
	int x;
	while (1)
	{
		cin >> x;

		if (x == 0)
		{
			return 0;
		}

		string str = to_string(x);

		int center = str.size()/2;

		bool isOdd = str.size() % 2;

		int j;

		center--;
		if (isOdd)
		{
			j = center + 2;
		}
		else
		{
			j = center + 1;
		}

		bool flag = true;

		
		for (int i = center; i >= 0; i--)
		{
			if (str[i] != str[j])
			{
				cout << "no" <<endl;
				flag = false;
				break;
		
			}
			j++;
		}
		if (flag)
		{
			cout << "yes" << endl;
		}
		
	}

}