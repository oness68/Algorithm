#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

bool primeNumber(int number)
{
    for (int i = 2 ; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    
    int count = 0;
     vector<int> arr;
 for (int i = 0; i < nums.size(); i++)
 {
     for (int  j = i+1; j < nums.size(); j++)
     {
         for (int k = j+1; k < nums.size(); k++)
         {
             arr.push_back(nums[i] + nums[j] + nums[k]);
         }
     }
 }
    for (auto it : arr)
    {
        if (primeNumber(it))
        {
            count++;
        }
    }

    return count;
}