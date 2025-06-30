#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int tempNum=0; //맞힌 개수
    int zeroNum=0; //0 개수
    for(int i : lottos){
        if(i==0){++zeroNum;}
        else if(find(win_nums.begin(),win_nums.end(), i )!=win_nums.end()){
               ++tempNum; //i가 있으면 number가 올라감
        }
    }
        (7-tempNum-zeroNum>6 ? answer.push_back(6) : answer.push_back(7-tempNum-zeroNum));
        (7-tempNum>6 ? answer.push_back(6) : answer.push_back(7-tempNum));
    //7 - 맞힌개수
    return answer;
}