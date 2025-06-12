#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    //
    int answer =0;
    long long temp = 0;
    
    for(size_t i=0; i<t.length()-p.length()+1;++i){
        temp=stoll(t.substr(i, p.length()));
        if(temp<=stoll(p)){
            answer++;
        }
    }
    return answer;
}