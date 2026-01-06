#include<iostream>
#include<vector>

using namespace std;



int main()
{
	int N, X;
	vector<int> A;

	cin >> N >> X;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >>temp;
		A.push_back(temp);
	}

	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] < X)
		{
			cout << A[i] << " ";
		}
	}

}