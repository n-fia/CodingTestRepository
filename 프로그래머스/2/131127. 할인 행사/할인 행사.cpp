#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string, int> m;
    for(int i=0; i<want.size(); ++i){
        for(int k=0; k<number[i]; ++k){
            m[want[i]]++;
        }
    }
    
    vector<string> vec;
    for(int i=0; i<discount.size()-9; ++i){
        unordered_map<string,int> mp = m;
        bool b = true;
        for(int j=0; j<10; ++j){
            --mp[discount[i+j]];
            if(mp[discount[i+j]]<0) b=false;
        }
        if(b) ++answer;
    }
    
    return answer;
}