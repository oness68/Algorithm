#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;


int main()
{
	int length;
	string str;
	int hash = 0;
	cin >> length;
	cin >> str;

	vector<int> v;

	for (int i = 0; i < length; i++)
	{
		v.push_back(str[i] - 96);
	}

	
	for (int i = 0; i < length; i++)
	{
		hash += v[i] * pow(31, i);
	}

	cout << hash;

}