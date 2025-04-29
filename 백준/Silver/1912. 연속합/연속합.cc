#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;


int main()
{
	int answer = 0;
	int size;
	cin >> size;
	vector<int> vec(size);
	vector<int> sumvec(size);

	for (int i = 0; i < size; i++)
	{
		cin >> vec[i];

	}

	sumvec[0] = vec[0];
	answer = vec[0];

	for (int i = 1; i < size; i++)
	{
		sumvec[i] = max(vec[i], sumvec[i - 1] + vec[i]);
		answer = max(answer, sumvec[i]);
	}
	
	cout << answer;

	
}
