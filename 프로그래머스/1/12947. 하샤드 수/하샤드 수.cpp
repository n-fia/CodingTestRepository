#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int y=x;
    int num=0;
    while(y){
        num += y%10;
        y/=10;
    }
    (x%num==0?answer=true:answer=false);
    
    
    return answer;
}