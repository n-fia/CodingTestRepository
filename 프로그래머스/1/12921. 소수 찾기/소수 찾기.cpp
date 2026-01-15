#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    vector<bool> vec(n+1, true);
    vec[0]=false;
    vec[1]=false;
    int answer = 0;
    
    for(long long i=2; i<=n; ++i){
        if(vec[i]==true){
            ++answer;
            for(long long j=i; j*i<=n; ++j){
                vec[i*j]=false;
            }
        }
    }
    
    return answer;
}