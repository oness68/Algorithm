#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    vector<int> DotProduct;

    for (int i = 0; i < a.size(); i++)
    {
        DotProduct.push_back(a[i] * b[i]);
    }

    for (int i = 0; i < a.size(); i++)
    {
        answer += DotProduct[i];
    }

    return answer;
}
