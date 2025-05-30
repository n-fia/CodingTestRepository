#include <string>
#include <vector>
#include <algorithm>    //sort를 위해 사용

using namespace std;

long long solution(long long n) {
    if(n<10){return n;}    
    long long answer = 0;
    vector<int> arr;
    int i=0;
    while(n){
        arr.push_back(n%10);
        n/=10;
        i++;
        if(n<10){
            arr.push_back(n);
            n=0;}
    }
    
    sort(arr.begin(),arr.end());
    
    int k=1;
    for(int j=0; j<=i;j++){
        answer+=k*arr[j];
        k*=10;
    }
    
    return answer;
}