#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    vector<int> x, y;
    
    for(auto& size : sizes){
        if(size[0]<size[1]){
            x.push_back(size[1]);
            y.push_back(size[0]);
        }
        else{
            x.push_back(size[0]);
            y.push_back(size[1]);
        }
    }
    
    int answer = *max_element(x.begin(), x.end());
    answer *= *max_element(y.begin(), y.end());
    
    return answer;
}