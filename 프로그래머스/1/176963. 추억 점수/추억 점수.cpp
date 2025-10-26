#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> unMap;
    for(int i=0; i<name.size(); ++i){
        unMap.insert({name[i], yearning[i]});
    }
    for(auto p : photo){
        int score=0;
        for(auto n : p){
            score+=unMap[n];
        }
        answer.push_back(score);
    }
    return answer;
}