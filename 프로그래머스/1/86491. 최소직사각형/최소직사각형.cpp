#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {

    vector<vector<int>> maxmin;
    int max;
    int min;
    
    for (int i = 0; i < sizes.size(); i++)
    {
        vector<int> v;
        if (sizes[i][0] > sizes[i][1])
        {
            max = sizes[i][0];
            min = sizes[i][1];
        }
        else
        {
            max = sizes[i][1];
            min = sizes[i][0];
        }
        v.push_back(max);
        v.push_back(min);
        maxmin.push_back(v);
    }

    int wide = maxmin[0][0];
    int hight = maxmin[0][1];
    for (int i = 1; i < maxmin.size(); i++)
    {
        if (maxmin[i][0] > wide)
        {
            wide = maxmin[i][0];
        }

        if (maxmin[i][1] > hight)
        {
            hight = maxmin[i][1];
        }
    }




    int answer = wide*hight;
    return answer;
}
