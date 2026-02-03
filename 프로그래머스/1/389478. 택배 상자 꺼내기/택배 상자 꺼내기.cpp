#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int nFloor, numFloor, remain;
    n%w==0 ? nFloor = n/w - 1 : nFloor = n/w ;//3
    num%w==0 ? numFloor = num/w - 1 : numFloor = num/w ;//1
    num%w==0 ? remain = w : remain = num%w;//2
    
    int answer = nFloor - numFloor;//2
    
    // n/w - num/w층 (3-1층 : 2개 > 1개를 더해도 되는지 계산해서 return)
    if((nFloor + numFloor) & 1 ){ // n과 num의 층이 다를 때
        if(w*nFloor + (w-remain + 1) <= n) ++answer;
    }
    else{ // n과 num의 층이 같을 때
        if(w*nFloor + remain <= n) ++answer;//
    }
    return answer;
}