#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char c : s){
        if(c==' '){
            answer+=' ';
        }
        else if(c<123 && c+n>122){
            answer+=c+n-26;
        }
        else if(c<91 && c+n>90){
            answer+=c+n-26;
        }
        else{
            answer+=c+n;
        }
            
    }
    return answer;
}