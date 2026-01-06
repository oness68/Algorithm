#include<iostream>
#include<vector>

using namespace std;



int main()
{
	vector<int> X, Y;
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int x, y;
		cin >> x >> y;

		X.push_back(x);
		Y.push_back(y);

	}

	for (int i = 0; i < T; i++)
	{
		cout << X[i] + Y[i] << endl;
	}
	

}