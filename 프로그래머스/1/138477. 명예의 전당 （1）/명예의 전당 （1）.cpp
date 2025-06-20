#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    int j=0;
    for(int i=1; i<=score.size(); ++i){
        sort(score.begin(), score.begin()+i,greater<>());
        answer.push_back(score[j]);
        if(j<k-1){++j;}
    }
    
    return answer;
}