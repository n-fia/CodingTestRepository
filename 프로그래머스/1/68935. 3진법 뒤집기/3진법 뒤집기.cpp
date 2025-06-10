#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0, i=1;
    string three;
    while(n){
        three+=n%3;
        n/=3;
    }
    reverse(three.begin(),three.end());
    for(char c : three){
        answer+=(int)c*i;
        i*=3;
    }
    return answer;
}