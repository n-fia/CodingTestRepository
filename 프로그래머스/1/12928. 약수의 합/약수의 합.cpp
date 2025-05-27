#include <string>
#include <vector>

using namespace std;

int solution(int n) {   // 0<=n<=3000
    int answer = 0; //약수를 더한 값
    
    if (n%2==0){ //짝수
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                answer+=i;
            }
        }
    }
    else { //홀수
        for(int i=1; i<n/2; i+=2){
            if(n%i==0){
                answer+=i;
            }
        }
    }

    return answer+n;
}