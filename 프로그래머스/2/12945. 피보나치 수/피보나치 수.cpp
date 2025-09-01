#include <string>
#include <vector>
#include <map>

using namespace std;

map<int,long long> myMap;

long long fib(int n){
    if(n==1 || n==2) return 1;
    if(!myMap[n]) myMap[n]=fib(n-1)+fib(n-2);
    return myMap[n]%1234567;
}

int solution(int n) {
    long long answer = fib(n)%1234567;
    return answer;
}