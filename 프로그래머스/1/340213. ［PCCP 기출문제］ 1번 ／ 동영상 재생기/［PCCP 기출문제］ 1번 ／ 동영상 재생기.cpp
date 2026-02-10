#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int stringToNum(string str){
    int minSum;
    string hour_str = str.substr(0,2);
    string min_str = str.substr(3,2);;
    minSum = stoi(hour_str)*60 + stoi(min_str);
    
    return minSum;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    int hour, min;
    int video_num = stringToNum(video_len);
    int pos_num = stringToNum(pos);
    int op_start_num = stringToNum(op_start);
    int op_end_num = stringToNum(op_end);
    
    for(int i=0; i<commands.size(); ++i){
        if( pos_num>=op_start_num && pos_num<=op_end_num ){
            pos_num = op_end_num;
        }
        if(commands[i]=="next"){
            pos_num += 10;
            if(pos_num >= video_num){
                pos_num = video_num;
            }
            if( pos_num>=op_start_num && pos_num<=op_end_num ){
                pos_num = op_end_num;
            }
        }
        else{
            pos_num -= 10;
            if(pos_num < 0){
                pos_num = 0;
            }
            if( pos_num>=op_start_num && pos_num<=op_end_num ){
                pos_num = op_end_num;
            }
        }
    }
    
    hour = pos_num/60;
    min = pos_num%60;
    
    if(hour<10){
        answer = "0" + to_string(hour) + ":";;
    }
    else{
        answer = to_string(hour) + ":";
    }
    if(min<10) answer+="0";
    answer += to_string(min);
    return answer;
}