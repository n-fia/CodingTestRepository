#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = s;
    for (int i = 0; i < s.length(); ++i) {
        int tempNum = index;
        int j = 1;
        int a = 0;
        while(j<= tempNum) {
            if (s[i] + j-a > 'z') { 
                s[i] ='a';
                a = j;
            }
            if (skip.find(s[i] + j-a) != string::npos) {
                ++tempNum;
            }
            if (answer[i] >= 'z') {
                answer[i] = 'a';
                ++j;
                continue;
            }
            ++answer[i];
            ++j;
        }
        int asdf = 0;
    }
    return answer;
}