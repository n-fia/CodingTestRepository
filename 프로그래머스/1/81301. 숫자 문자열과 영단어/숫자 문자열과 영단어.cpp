#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    string number[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int i=0;
    for(string str : number){
        regex re(str);
        s=regex_replace(s,re,to_string(i));
        ++i;
    }
    return stoi(s);
}