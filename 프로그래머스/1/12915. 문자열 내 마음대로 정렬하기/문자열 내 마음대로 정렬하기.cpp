#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

int index;

bool compare(string str1, string str2)
{
	if (str1[index] == str2[index])
	{
		return str1 < str2;
	}
	return str1[index] < str2[index];
}


vector<string> solution(vector<string> strings, int n) {
    vector<string> answer=strings;

	index = n;

	sort(answer.begin(), answer.end(), compare);


    return answer;
}

