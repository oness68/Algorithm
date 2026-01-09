#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;



int main()
{
	vector<int> Arr;
	int max=-1;
	int index=0;

	for (int i = 0; i < 9; i++)
	{
		int temp;

		cin >> temp;

		Arr.push_back(temp);
	}

	
	for (int i = 0; i < Arr.size(); i++)
	{
		if (Arr[i] > max)
		{
			max = Arr[i];
			index = i;
		}
	}

	cout << max << endl;
	cout << index+1 << endl;


}