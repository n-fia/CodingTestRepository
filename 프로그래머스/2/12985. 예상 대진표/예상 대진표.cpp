#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int j = 0;

    while(1){
        ++j;
        a&1 ? a=a/2+1 : a=a/2;
        b&1 ? b=b/2+1 : b=b/2;
        if(a==b) return j;
    }

    return 0;
}