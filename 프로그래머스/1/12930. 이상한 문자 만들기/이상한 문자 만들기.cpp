#include <string>
#include <sstream>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int n=0;
    for(char c : s){
        if(answer.size()==s.size()){break;}
        (n%2==0 ? answer+=toupper(c) : answer+=tolower(c));
        ++n;
        if(c==' '){
            n=0;
        }
    }
    return answer;
}