#include <iostream>

using namespace std;
int solution(int n)
{
    int answer=0, i = 0;

    while(n){
        i=n%10;
        answer+=i;
        n/=10;
    }
    
    cout << answer << endl;

    return answer;
}