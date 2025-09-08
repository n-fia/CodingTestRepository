#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr) {
    int answer = *max_element(arr.begin(),arr.end());
    int b=false;
    while(answer<INT_MAX){
        b=true;
        for(int n : arr){
            if(answer%n!=0){
                b=false;
                break;
            }
        }
        if(b) return answer;
        ++answer;
    }
    return 0;
}