#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int A, B, C;
	vector<int> count(10,0);
	cin >> A;
	cin >> B;
	cin >> C;

	long long temp = A * B * C;

	string str = to_string(temp);

	for (int i = 0; i < str.size(); i++)
	{
		switch (str[i])
		{
		case '0':
			count[0]++;
			break;
		case '1':
			count[1]++;
			break;
		case '2':
			count[2]++;
			break;
		case '3':
			count[3]++;
			break;
		case '4':
			count[4]++;
			break;
		case '5':
			count[5]++;
			break;
		case '6':
			count[6]++;
			break;
		case '7':
			count[7]++;
			break;
		case '8':
			count[8]++;
			break;
		case '9':
			count[9]++;
			break;
		default:
			break;
		}
	}


	for (auto it : count)
	{
		cout << it << endl;
	}

}