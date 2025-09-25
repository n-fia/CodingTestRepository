#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int temp=0;
    for(int i=0; i<s.length(); ++i){
        for(int j=i; j<s.length(); ++j){
            if(s[i]==s[j]){
                ++temp;
            }          
            else{
                --temp;
            }
            if(temp==0){
                ++answer;
                i=j+1;
            }
        }
    }
    if(temp) ++answer;
    
    return answer;
}