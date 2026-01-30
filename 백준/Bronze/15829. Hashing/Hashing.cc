#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;

long long MOD = 1234567891;

int main()
{
	int length;
	string str;
	long long hash = 0;
	long long r=1;
	cin >> length;
	cin >> str;

	vector<long long> v;

	for (int i = 0; i < length; i++)
	{
		v.push_back((long long)str[i] - 96);
	}

	
	for (int i = 0; i < length; i++)
	{
		hash += (v[i] * r)%MOD;
		r *= 31;
		r %= MOD;

	
	}

	cout << hash%MOD;

}