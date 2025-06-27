#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 1; //첫 번째 기사는 공격력 1
    for(int i=2; i<=number; ++i){ //모든 기사 반복
        int tempNum = 0;//약수 개수 (기사의 공격력)
        for(int j=1; j<=sqrt(i); ++j){
            if(i%j==0){tempNum+=2;}
        }
        if(pow((int)sqrt(i),2)==i){tempNum--;}//tempNum 계산 완료
        (tempNum>limit ? answer+=power : answer+=tempNum);
    }
    return answer;
}