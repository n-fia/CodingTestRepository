#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int n = *min_element(arr.begin(), arr.end());//arr배열의 최소값 n
    if(arr.size()>1){
        for(int i=0; i<arr.size(); ++i){
            if(arr[i]!=n){
                answer.push_back(arr[i]);
            }
        }
    }
    else{
        answer={-1};
    }
    
    return answer;
}