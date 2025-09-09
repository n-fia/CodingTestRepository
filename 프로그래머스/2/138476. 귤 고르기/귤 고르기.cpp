#include <string>
#include <vector>
#include<unordered_map>
#include<map>
#include<algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    //크기, 개수
    unordered_map<int, int> unMap;
    //개수, 크기
    multimap<int,int, std::greater<int>> mulMap;
    
    for(int size : tangerine){
        ++unMap[size];
    }
    for(auto m : unMap){
        mulMap.insert({m.second,m.first});
    }
    
    for(auto m : mulMap){
        k-=m.first;
        ++answer;
        if(k<=0) break;
    }
    
    
    return answer;
}