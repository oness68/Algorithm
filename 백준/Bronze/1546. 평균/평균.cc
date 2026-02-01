#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int main()
{
	int size;
	int sum=0;
	float Average;

	cin >> size;

	vector<int> score(size);

	for (int i = 0; i < size; i++)
	{
		cin >> score[i];
	}

	sort(score.begin(), score.end());

	for (int i = 0; i < size; i++)
	{
		sum += score[i];
	}

	Average = (float)sum / (float)score[size - 1] * 100;
	Average /= (float)size;
	cout << Average;
}