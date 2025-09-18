#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for(int row =left/n+1; row<=right/n+1; ++row){
        for(int i=1; i<=n; ++i){
            if(i<row){
                answer.push_back(row);
            }
            else{
                answer.push_back(i);
            }
        }
    }
    vector<int> arr(answer.begin()+left%n,answer.begin()+left%n+right-left+1);
    return arr;
}