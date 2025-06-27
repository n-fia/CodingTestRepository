#include <string>
#include <vector>

using namespace std;
int solution(int n, int m, vector<int> section) {
int answer=0;
int chill=0;
for(int i=0; i<section.size(); ++i){
    if(chill<section[i]){
        chill = section[i]+m-1;
        answer++;
        continue;
    }
}
    return answer;
}