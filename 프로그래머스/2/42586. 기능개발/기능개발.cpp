#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days(speeds.size(),0);
    for(int i=0; i<days.size(); ++i){
        while(progresses[i]<100){
            ++days[i];
            progresses[i]+=speeds[i];
        }
    }
    int temp=0, num=0;
    for(int now : days){
        if(temp>=now){
            ++num;
        }
        else{
            if(num!=0){
                answer.push_back(num);
            }
            temp=now;
            num=1;
        }
    }
    answer.push_back(num);
    return answer;
}