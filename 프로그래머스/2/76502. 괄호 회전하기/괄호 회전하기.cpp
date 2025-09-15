#include <string>
#include <vector>
#include <stack>

using namespace std;

bool bIsRight(string str) {
    stack<char> cs;
    for (int i = 0; i < str.size(); ++i) {
        if (cs.empty()) cs.push(str[i]);
        else if (cs.top() == '}' || cs.top() == ']' || cs.top() == ')') {
            return false;
        }
        else if (cs.top() == '(' && str[i] == ')') {
            cs.pop();
        }
        else if (cs.top() == '{' && str[i] == '}') {
            cs.pop();
        }
        else if (cs.top() == '[' && str[i] == ']') {
            cs.pop();
        }
        else {
            cs.push(str[i]);
        }
    }
    if (cs.empty()) return true;
    else return false;
}

int solution(string s) {
    int answer=0;
    for(int i=0; i<s.size(); ++i){
        if (bIsRight(s)) ++answer;
        s += s[0];
        s=s.substr(1);
    }
    return answer;
}