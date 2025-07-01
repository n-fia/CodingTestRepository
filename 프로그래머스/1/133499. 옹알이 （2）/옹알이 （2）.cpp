#include <string>
#include <regex>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    std::regex re{("(aya|ye|woo|ma)*")};
    std::regex er{("(ayaaya|yeye|woowoo|mama)")};
    std::smatch match;
    for(string bab : babbling){
        if(regex_match(bab,re)){
            ++answer;
            if(regex_search(bab,match,er)){
                --answer;
            }
        }
    }
    return answer;
}