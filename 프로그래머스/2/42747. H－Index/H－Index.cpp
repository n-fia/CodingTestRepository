#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> citations) {
    int maxNum = -1;
        for(int h=0; h<=citations.size(); ++h){
            int num = 0; //h번 이상 인용된 논문의 수
            for(int i=0; i<citations.size(); ++i){
                if(citations[i]>=h){
                    ++num;
                }
            }
            if(num>=h && h>=citations.size()-num){
                maxNum=max(maxNum, h);
            }
        }
    return maxNum;
}