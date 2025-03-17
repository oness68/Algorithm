#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
	int answer = 0;
	int rest;
	int temp;

	if (1 <= b && b < a && a <= n && n <= 1000000)
	{

		temp = n / a;
		answer = temp * b;
		rest = n % a;


		answer += solution(a, b, answer + rest);


		return answer;
	}

	else
		return 0;
	
}
