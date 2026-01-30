#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int count;

	int M;

	int top=0;

	cin >> count >> M;

	vector<int> V(count);

	for (int i = 0; i < count; i++)
	{
		cin >> V[i];
	}

	sort(V.begin(), V.end(),greater<int>());

	for (int i = 0; i < count; i++)
	{

		for (int j = i+1; j < count; j++)
		{
			for (int k = j+1; k < count; k++)
			{
				int temp = V[i] + V[j] + V[k];
				if (top < temp && temp <= M)
				{
					top = temp;
				}
			}
		}
	}
	
	cout << top;
}