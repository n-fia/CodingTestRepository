#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0, j=0;
    for(int i=left; i<=right;++i) {
        j=sqrt(i);
        if(j*j==i) {//제곱근이 있으면 홀수
            answer-=i;
        }
        else{//짝수
            answer+=i;
        }
    }
    return answer;
}