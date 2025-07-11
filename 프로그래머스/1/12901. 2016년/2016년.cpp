#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<string> days{"THU","FRI","SAT","SUN","MON","TUE","WED"};
    vector<int> month{31,29,31,30,31,30,31,31,30,31,30,31};
    int num=0;
    for(int i=0; i<a-1;++i){
        num+=month[i];
    }
    return days[(num+b)%7];
}