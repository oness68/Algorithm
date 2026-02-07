#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;




int main()
{

	int T;

	

	vector<int> k;
	vector<int> n;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int temp;
		cin >> temp;
		k.push_back(temp);
		cin >> temp;
		n.push_back(temp);
	}

	int TopFloor = *max_element(k.begin(), k.end());

	TopFloor++;
	vector<vector<int>> APT(TopFloor,vector<int>(14,0));

	
	for (int i = 0; i < TopFloor; i++)
	{
		int p;
		for (int j = 0; j < 14; j++)
		{
			int lowPeople=0;

			if (i > 0)
			{
				for (int d = 0; d <= j; d++)
				{
					lowPeople +=  APT[i - 1][d];
				}
				p = lowPeople;
			}
			else 
			{
				p = j + 1;
			}

			
		
			APT[i][j] = p;
		}
	}

	for (int i = 0; i < T; i++)
	{
		int FloorIndex=k[i];
		int PeoPleIndex=n[i];

		cout << APT[FloorIndex][PeoPleIndex-1]<<endl;
	}

	
}