#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<int> arr;
    stringstream ss(s);
    
    while(ss){
        string str;
        if(ss >> str){
            arr.push_back(stoi(str));
        }
    }
    
    sort(arr.begin(), arr.end());
    
    answer = to_string(arr[0]) + " " + to_string(arr[arr.size()-1]);
    
    return answer;
}