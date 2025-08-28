#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 1, 2, 3, 2, 4, 2, 5};
    int arr3[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> arr(3,0);
    for(int i=0; i<answers.size(); ++i){
        if(arr1[i%5] == answers[i]) ++arr[0];
        if(arr2[i%8] == answers[i]) ++arr[1];
        if(arr3[i%10] == answers[i]) ++arr[2];
    }
    
    int num = *max_element(arr.begin(), arr.end());
    if(arr[0]==num) answer.push_back(1);
    if(arr[1]==num) answer.push_back(2);
    if(arr[2]==num) answer.push_back(3);
    
    return answer;
}