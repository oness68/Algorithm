#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;



int main()
{
	int N;

	cin >> N;

	vector<int> V(N);

	for (int i = 0; i < N; i++)
	{
		cin >> V[i];
	}

	cout << *min_element(V.begin(), V.end()) <<" "<< *max_element(V.begin(), V.end());

}