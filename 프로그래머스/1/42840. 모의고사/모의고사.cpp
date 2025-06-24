#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer(3);
    int a=0,b=0,c=0;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 1, 2, 3, 2, 4, 2, 5};
    int arr3[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    for(int i=0;i<answers.size();++i){
        if( answers[i] == arr1[i%5]){
            ++answer[0];
        }
        if( answers[i] == arr2[i%8] ){
            ++answer[1];
        }
        if( answers[i] == arr3[i%10] ){
            ++answer[2];
        }
    }
    vector<int> answer2;
    int maxNum = max({answer[0], answer[1], answer[2]});
    for(int i=0; i<answer.size(); ++i){
        if(answer[i]==maxNum){
            answer2.push_back(i+1);
        }
    }
    
//     answer.erase(answer.begin(), answer.begin()+3);
    return answer2;
}