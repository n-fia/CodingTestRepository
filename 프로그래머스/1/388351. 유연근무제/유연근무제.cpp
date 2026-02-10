#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    for(int i=0; i<schedules.size(); ++i){
        bool result = true;
        for(int j=0; j<7; ++j){
            if((j+startday)%7 == 0 || (j+startday)%7 == 6){
                continue;
            }
            int time = timelogs[i][j]/100*60 + timelogs[i][j]%100;
            int schedule = schedules[i]/100*60 + schedules[i]%100;
            if(time > schedule + 10) result = false;
        }
        if(result){
            ++answer;
        }
    }
    return answer;
}