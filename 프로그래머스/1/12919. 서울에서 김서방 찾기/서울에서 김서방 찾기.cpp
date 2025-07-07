#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int a;
    for(int i=0; i<seoul.size(); ++i){
        if(seoul[i]=="Kim"){
            a=i;
        }
    }
    
    string answer = "김서방은 "+ to_string(a)+"에 있다";
    return answer;
}