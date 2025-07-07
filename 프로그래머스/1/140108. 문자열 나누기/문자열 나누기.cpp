#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int a = 0;
    int b = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[0] == s[i]) {
            ++a;
        }
        else { ++b; }

        if (a > 0 && a == b) {

            s.erase(s.begin(), s.begin() + a+b);

            ++answer;
            i = -1;
            a = 0;
            b = 0;
        }
        else if (i == s.length() - 1) {
            ++answer;
        }

    }
    return answer;
}
