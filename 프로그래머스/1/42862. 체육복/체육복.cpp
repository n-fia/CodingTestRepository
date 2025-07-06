#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int i = 0;
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    //중복제거
    for (int j = 0; j < reserve.size(); ++j) {
        if (find(lost.begin(), lost.end(), reserve[j]) != lost.end()) {
            lost.erase(find(lost.begin(), lost.end(), reserve[j]));
            reserve.erase(reserve.begin() + j);
            --j;
        }
    }
    
    for(int k=1; k<=n; ++k){
        if(k==lost[i]){
            for(int j=0; j<reserve.size(); ++j){
                if(abs( lost[i] - reserve[j] ) ==1){
                    answer++;
                    reserve.erase(reserve.begin()+j);
                }
            }
            i++;
            if (i >= lost.size()) {
                answer += n - k;
                break;
            }
        }
        else{answer++;}
    }
    return answer;
}