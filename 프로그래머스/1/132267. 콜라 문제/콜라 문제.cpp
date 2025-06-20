#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    int answer = 0;
    int t = 0;
    while(n+t>=a)
    {
        answer+=(n+t)/a*b;
        n+=t;
        t=n%a;
        n=n/a*b;
    }
    
    return answer;
}