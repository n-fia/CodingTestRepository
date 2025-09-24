#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string,int> m;
    for(vector<string> cloth : clothes){
        ++m[cloth[1]];
    }
    for(auto c : m){
        answer*=(c.second+1);
    }
    
    return answer-1;
}