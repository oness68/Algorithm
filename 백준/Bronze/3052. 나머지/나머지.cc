#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;




int main()
{
	vector<int> V;

	for (int i = 0; i < 10; i++)
	{
		int x;
		cin >> x;

		int rest = x % 42;

		if (find(V.begin(), V.end(), rest) == V.end())
		{
			V.push_back(rest);
		}

	}

	cout << V.size() << endl;

	

}