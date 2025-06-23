#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int x=0;
    string str[] = { "THU","FRI","SAT","SUN","MON","TUE","WED" };
    int arr[]={31,29,31,30,31,30,31,31,30,31,30,31};
    // 1월 1일 금요일
    // 1월 8일 금요일(1+7)
    // 1월은 31일까지
    // 1월 31일은 몇요일이지 > 7*4+3 > 금 토 일요일
    // 2월은 29일 > 31+29 > 60 > 7*8 + 4 > 금 토 일 월 !
    for (int i=0; i<a-1 ; ++i){
        x+=arr[i];
    }
    x=(x+b)%7;
    
    return str[x];
}