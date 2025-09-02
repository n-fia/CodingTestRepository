#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2,0);
    int y;
    
    for(int x=1; x<brown/2; ++x){
        y = (brown+yellow) / x;
        if(brown+yellow!=x*y) continue;
        if(2*x+2*y-4==brown && (x-2)*(y-2)==yellow){
            if(x>y){
                answer[0]=x;
                answer[1]=y;
            }
            else{
                answer[0]=y;
                answer[1]=x;
            }
        }    
    }
    
    return answer;
}