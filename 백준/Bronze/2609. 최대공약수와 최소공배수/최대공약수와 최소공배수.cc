#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int EuclideanAlgorithm(int a,int b)
{
	int result;

	int A, B, R;

	if (a >= b)
	{
		A = a;
		B = b;
	}
	else
	{
		A = b;
		B = a;
	}
	R = A % B;
	while (R != 0)
	{
		A = B;
		B = R;
		R = A % B;
	}

	result = B;

	return result;
}

int F_LCM(int A, int B, int GCD)
{
	int result;

	result = (A * B) / GCD;

	return result;
}

int main()
{
	int A, B;

	cin >> A >> B;

	int GCD, LCM;

	GCD = EuclideanAlgorithm(A, B);

	LCM = F_LCM(A, B, GCD);

	cout << GCD << endl << LCM;
	
}