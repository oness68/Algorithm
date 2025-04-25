#include <string>
#include <vector>
#include <algorithm>
#include<iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int number = (score.size() / m) * m;


    sort(score.begin(), score.end(), greater<int>());

    for (int i = m-1; i < number; i += m)
    {
        answer += score[i] * m;
    }




    return answer;
}

