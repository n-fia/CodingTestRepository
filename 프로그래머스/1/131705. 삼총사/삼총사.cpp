#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int num=number.size();
    
    //ㅋㅋㅋㅋㅋㅋㅋㅋ찔리면 피남
    for(int i=0;i<num; ++i){
        for(int j=i+1; j<num; ++j){
            for(int k=j+1; k<num; ++k){
                if(number[i]+number[j]+number[k]==0){
                    ++answer;
                }
            }
        }        
    }
    return answer;
}