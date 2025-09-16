#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> s;
    int n=elements.size();
    for(int i=0; i<n; ++i){
        int num=0;
        for(int j=0; j<n; ++j){
            num+=elements[(i+j)%n];
            s.insert(num);
        }
        s.insert(num);
    }
    
    
    return s.size();
}