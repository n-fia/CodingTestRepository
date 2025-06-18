#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(size_t i=0; i<numbers.size()-1; ++i){
        for(size_t j=i+1; j<numbers.size();++j){
            if(find(answer.begin(), answer.end(), numbers[i]+numbers[j])==answer.end()){
                answer.push_back(numbers[i]+numbers[j]);
            }
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}