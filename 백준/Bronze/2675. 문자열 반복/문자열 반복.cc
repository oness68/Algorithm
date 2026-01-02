#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;



int main()
{
	int T;

	vector<string> v;
	vector<int> count;
	string S;
	int R=0;

	string P="";

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> R >> S;

		v.push_back(S);
		count.push_back(R);

	}

	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			for (int k = 0; k < count[i]; k++)
			{
				P += v[i][j];
			}
			

		}
		cout << P << endl;

		P = "";
	}
}