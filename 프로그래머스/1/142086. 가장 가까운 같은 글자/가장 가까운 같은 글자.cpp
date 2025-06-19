#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    //찾았을 때 이전 인덱스로 가면서 하나하나 비교?
    for(int i=0; i<s.length(); ++i){
        for(int j=i-1; j>=0; --j){
            if(s[j]==s[i]){
                answer.push_back(i-j);
                break;
            }
        }
        if(answer.size()!=i+1){answer.push_back(-1);}
    }
    
    return answer;
}