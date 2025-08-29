#include <string>
#include <vector>
#include<bitset>
#include <bits/stdc++.h>

using namespace std;

string binary(int number) {
    if(number==1){
        return "1";
    }
	int startNumber=0;
	string answer = "1";
	for (int i = 1; i <= number; i *= 2) {
		startNumber = i;
	}
	number -= startNumber;
	for (int i = startNumber/2; i>1 ; i /= 2) {
		if (number >= i)
		{
			answer += "1";
			number -= i;
		}
		else {
			answer += "0";
		}
	}
	(number == 1 ? answer += "1" : answer += "0");
	return answer;
}

vector<int> solution(string s) {
    vector<int> answer(2,0);
    
    while(true){
        if(s=="1") break;
        int one=0;
        bool b=true;
        for(char c : s){
            if(c=='1'){
                ++one;
            }
            else{
                ++answer[1];
                b=false;
            }
        }
        
        s=binary(one);
        ++answer[0];
    }
    
    return answer;
}