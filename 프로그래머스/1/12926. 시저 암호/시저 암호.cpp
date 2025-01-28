#include <string>
#include <vector>
#include<iostream>

using namespace std;


char func1(char c, int n)
{
	int number = c;
	number += n;
	if (number > 'z')
	{
		number = number - 'z';
		c = 96 + number;
		return c;
	}
	c = number;
	return c;
}



char func2(char c, int n)
{

	int number = c;
	number += n;
	if (number > 'Z')
	{
		number = number - 'Z';

		c = 64 + number;
		return c;
	}
	c = number;
	return c;
}

string solution(string s, int n) {
    string answer = s;
	
	if (n < 0 && n>25)
		return s;

	for (int i = 0; i < answer.size(); i++)
	{
		if (answer[i] == ' ')
			continue;

		if (answer[i] <= 'Z')
		{
			answer[i] = func2(answer[i], n);

		}
		else
		{
			answer[i] = func1(answer[i], n);
		}
	

	}


    return answer;
}





