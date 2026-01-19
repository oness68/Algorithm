#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	int N;//참가자수
	int S, M, L, XL, XXL, XXXL;
	int TotalCount=0;
	int TotalPenSet;
	int TotalPenRest;
	vector<int> TSize;
	int T, P;//티셔츠 묶음,펜 묶음

	cin >> N;

	cin >> S >> M >> L >> XL >> XXL >> XXXL;

	cin >> T >> P;

	TSize.push_back(S);
	TSize.push_back(M);
	TSize.push_back(L);
	TSize.push_back(XL);
	TSize.push_back(XXL);
	TSize.push_back(XXXL);


	for (int i = 0; i < TSize.size(); i++)
	{
		if (TSize[i] < 1)
		{
			continue;
		}
		int count = TSize[i] / T + (TSize[i]%T>0);

		

		TotalCount += count;

	}

	TotalPenSet = N / P;
	TotalPenRest = N % P;

	cout << TotalCount << endl;
	cout << TotalPenSet << " " << TotalPenRest;

}