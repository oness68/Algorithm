#include<iostream>

using namespace std;


int main()
{
	int N;

	cin >> N;

	int p=1;


	for (int i = 1; i < N; p++)
	{
		i += 6 * p;
	}

	cout << p;

}