#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) {

 long long answer = 0;
 long long i = sqrt(n);
 if (n > 0&&n< 50000000000000)
 {
     if (sqrt(n) == (double)i)
     {
         i = i + 1;
         answer = i * i;

     }
     else
     {
         answer = -1;
     }
     return answer;
 }

 else
 {
     return -1;
 }
   
}