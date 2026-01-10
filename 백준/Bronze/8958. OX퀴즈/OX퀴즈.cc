#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main()
{
	int T;
	int AddScore = 1;
	int Score=0;
	bool combo = false;
	vector<string> V;
	vector<int> Arrscore;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string str;
		cin >> str;
		V.push_back(str);
	}
	
	for (int i = 0; i < V.size(); i++)
	{
		for (int j = 0; j < V[i].size(); j++)
		{
			if (V[i][j] == 'O')
			{
				if (combo)
				{
					AddScore++;
				}
				Score += AddScore;
				combo = true;
			}
			else
			{
				AddScore = 1;
				combo = false;
			}
		}
		
		Arrscore.push_back(Score);

		AddScore = 1;
		combo = false;
		Score = 0;

	}

	for (auto it : Arrscore)
	{
		cout << it << endl;
	}
	

}