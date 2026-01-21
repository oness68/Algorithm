#include<iostream>

using namespace std;


int main()
{
	int N;

	cin >> N;


	for (int i = 0; i < N; i++)
	{
		int sum = i;
		int number = i;

		while (number != 0)
		{
			sum += number % 10;
			number /= 10;
		}

		if (sum == N)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;

}