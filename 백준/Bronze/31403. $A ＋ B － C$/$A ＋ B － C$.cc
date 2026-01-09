#include<iostream>
#include<vector>
#include<string>
using namespace std;



int main()
{
	string A, B, C;

	cin >> A;
	cin >> B;
	cin >> C;

	int IntResult;
	string Str="";
	int StrResult;

	IntResult = stoi(A) + stoi(B) - stoi(C);
	Str += A;
	Str += B;

	StrResult = stoi(Str);

	StrResult = StrResult - stoi(C);

	cout << IntResult << endl;
	cout << StrResult << endl;



}