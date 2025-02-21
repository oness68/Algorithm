#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {

	string answer;
    vector<int> mon = { 31,29,31,30,31,30,31,31,30,31,30,31 };

    vector<string> wday = { "THU","FRI","SAT","SUN","MON","TUE","WED" };


	int total=0;
	for (int i = 0; i < a-1; i++)
	{
		total += mon[i];
	}
	

	total += b;





    return answer=wday[total%7];
}