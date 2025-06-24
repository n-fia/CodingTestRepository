#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    //arr1.size() , vector<int>(arr1[0].size()) 
    vector<vector<int>> answer(arr1.size());
    
    for(size_t i=0; i<arr1.size(); ++i)
    {
        for(size_t j=0; j<arr1[i].size();++j)
        {
            //행에 순서대로 넣는 방법
            answer[i].push_back(arr1[i][j] + arr2[i][j]);
        }
    }
    return answer;
}