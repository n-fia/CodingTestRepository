#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()),report.end());
    
    
    unordered_map<int, string> inInf;
    unordered_map<int, string> inRep;
    for(int i=0; i<report.size(); ++i){
        stringstream ss(report[i]);
        string s1, s2;
        ss >> s1 >> s2;
        inInf[i]=s1;
        inRep[i]=s2;
    }
    
    unordered_map<string, int> repID;
    for(int i=0; i<report.size(); ++i){
        ++repID[inRep[i]];
    }
    
    unordered_map<string, int> infID;    
    for(int i=0; i<report.size(); ++i){
        if(repID[inRep[i]]>=k){
            ++infID[inInf[i]];
        }
    }
    
    vector<int> answer;
    for(int i=0; i<id_list.size(); ++i){
        answer.push_back(infID[id_list[i]]);
    }
    
    return answer;
}