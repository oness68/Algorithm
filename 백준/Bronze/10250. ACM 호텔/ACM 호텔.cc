#include<iostream>
#include<vector>
using namespace std;

class Hotel
{
public:
	
	int H;
	int W;
	int N;

	Hotel(int a, int b, int c)
	{
		this->H = a;
		this->W = b;
		this->N = c;
	}
};

int main()
{
	


	vector<Hotel> arr;

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int H, W, N;

		cin >> H >> W >> N;

		Hotel HH(H, W, N);

		arr.push_back(HH);
	}

	for (int i = 0; i < T; i++)
	{
		int Floor;
		int RoomNumber;

		if (arr[i].N % arr[i].H == 0)
		{
			Floor = arr[i].H;
			RoomNumber = arr[i].N / arr[i].H;
		}
		else
		{
			Floor = arr[i].N % arr[i].H;
			RoomNumber = arr[i].N / arr[i].H +1;
		}

		Floor = Floor * 100;

		int result = Floor + RoomNumber;

		cout << result << endl;
		
	}

}