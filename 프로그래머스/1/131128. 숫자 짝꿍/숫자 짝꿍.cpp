#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    for (int i = 9; i >= 0; --i) {
        if (X.empty()) { break; }
        if (Y.empty()) { break; }
        if (X.find(i+'0') != std::string::npos && Y.find(i+'0') != std::string::npos) {
            int a = Y.find(i + '0');
            int b = X.find(i + '0');
            if (X.length()-X.find(i + '0') < Y.length()-Y.find(i + '0')) {
                answer += std::string(X.length() - X.find(i + '0'), i + '0');
            }
            else {
                answer += std::string(Y.length() - Y.find(i + '0'), i + '0');
            }
        }
        if(X.find(i+'0') != std::string::npos){
            X.erase(X.begin() + X.find(i + '0'), X.end());
        }
        if(Y.find(i+'0') != std::string::npos){
            Y.erase(Y.begin() + Y.find(i + '0'), Y.end());
        }
    }
    
    if (answer.empty()) { return "-1"; }
    if (answer[0] == '0') { return "0"; }
    return answer;
}