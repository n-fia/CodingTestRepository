#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    //"Kim"을 찾는 함수
    int index=0;
    for(int i=0; i<seoul.size(); i++){
        if(seoul[i]=="Kim"){
            index=i;
            i=seoul.size();
        }
    }
    
    answer= "김서방은 " + to_string(index) + "에 있다" ;
    return answer;
}