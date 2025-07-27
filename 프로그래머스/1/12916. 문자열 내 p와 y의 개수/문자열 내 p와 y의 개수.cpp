#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int ans=0;
    for(char c : s){
        if ( c == 'p' || c == 'P'){
            ++ans;
        }
        else if ( c == 'y' || c == 'Y'){
            --ans;
        }
    }
    if(ans==0) return true;
    return false;
}