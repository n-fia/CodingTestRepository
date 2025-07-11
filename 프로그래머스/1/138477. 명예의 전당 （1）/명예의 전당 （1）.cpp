#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    for(int i=0; i<score.size(); ++i){
        sort(score.begin(), score.begin()+i+1,greater<>());
        (i<k ? answer.push_back(score[i]) : answer.push_back(score[k-1]));
    }
    
    return answer;
}