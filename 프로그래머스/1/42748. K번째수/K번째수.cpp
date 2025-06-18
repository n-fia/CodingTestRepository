#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    size_t t=0;
    for(int i=0; i<commands.size(); ++i){
        vector<int> temp=array;
        sort(temp.begin()+commands[i][0]-1,temp.begin()+commands[i][1]); //2번째[1]부터 5번째[4]까지 정렬
        t=commands[i][0]+commands[i][2]-2;
        answer.push_back(temp[t]);
    }
    return answer;
}