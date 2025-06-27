#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int solution(vector<int> nums) {
    vector<int>answer;
    //answer에 3개 더한 숫자 삽입
    for(int i=0;i<nums.size()-2;++i){
        for(int j=i+1;j<nums.size()-1;++j){
            for(int k=j+1; k<nums.size();++k){
                    answer.push_back(nums[i]+nums[j]+nums[k]);
            }
        }
    }
    
    //소수인지 확인
    int ans=0;
    for(int k=0; k<answer.size();++k){
        bool n=0;
        for(int j=2; j<answer[k]; ++j){
            if( answer[k]%j == 0){
                n=1;
                break;
            }
        }
        if (n==0){ans++;}
    }
    return ans;
}