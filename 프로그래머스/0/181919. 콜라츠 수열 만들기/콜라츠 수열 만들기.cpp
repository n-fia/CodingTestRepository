#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    while(n!=1){
        if(n%2==0){//짝수
            answer.push_back(n/2);
            n/=2;
        }
        else{
            answer.push_back(3 * n+ 1);
            n=3 * n+ 1;
        }
    }
    return answer;
}