#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

bool check(int x)
{
	int rest;
	if (x < 2)
	{
		return false;
	}
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int N;
	int count = 0;
	cin >> N;

	vector<int> V(N);

	for (int i = 0; i < N; i++)
	{
		cin >> V[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (check(V[i]))
		{
			count++;
		}
	}


	cout << count;

}