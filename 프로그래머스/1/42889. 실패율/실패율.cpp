#include <string>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {    
    vector<int> answer;
    if(N==1){
        answer.push_back(1);
        return answer;
    }
    
    vector<tuple<int,float,float>> vec;
    
    for(int i=1; i<=N; ++i){
        vec.push_back({i,0,0});
    }
    
    for(int stage : stages){
        if(stage==N+1){
            stage-2;
            for(int i=0; i<=stage; ++i){
                ++get<2>(vec[i]);
            }
        }
        else{
            --stage;
            for(int i=0; i<=stage; ++i){
                ++get<2>(vec[i]);
            }
            ++get<1>(vec[stage]);
        }
    }
    
    sort(vec.begin(), vec.end(), [](tuple<int,float,float> a, tuple<int,float,float> b){
        float i,j;
        if(get<2>(a)!=0) i= get<1>(a)/get<2>(a);
        else i=0;
        if(get<2>(b)!=0) j=get<1>(b)/get<2>(b);
        else j=0;
        if(i!=j) return i > j;
        return get<0>(a) < get<0>(b);
    });
    
    for(int i=0; i<N; ++i){
        answer.push_back(get<0>(vec[i]));
    }
    
    return answer;
}