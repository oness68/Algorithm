#include<iostream>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;

int main()
{
	string str;

	cin >> str;

	char index='a';

	while (index <= 'z')
	{
		auto it = find(str.begin(), str.end(), index);
		if (it != str.end())
		{
			cout << it - str.begin() << " ";
		}
		else
		{
			cout << "-1 ";
		}

		index++;
	}

}