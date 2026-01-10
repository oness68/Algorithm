#include<iostream>
#include<vector>
#include<string>
using namespace std;




int main()
{
	bool ascending = false;
	bool descending = false;


	vector<int> arr(8,0);

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7];

	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i - 1] + 1 == arr[i])
		{
			ascending = true;
		}
		else
		{
			ascending = false;
			break;
		}
	}

	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i - 1] -1 == arr[i])
		{
			descending = true;
		}
		else
		{
			descending = false;
			break;
		}
	}

	if (!ascending && !descending)
	{
		cout << "mixed" << endl;
	}
	else if (ascending)
	{
		cout << "ascending" << endl;
	}
	else if (descending)
	{
		cout << "descending" << endl;
	}

}