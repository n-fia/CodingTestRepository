#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int i=0;
    for (int i = 0; i < commands.size(); ++i) {
        vector<int> temp=array;
        sort(temp.begin()+commands[i][0]-1, temp.begin()+commands[i][1]);
        answer.push_back(temp[commands[i][0]+commands[i][2]-2]);
    }
    return answer;
}