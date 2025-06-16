#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string answer = "";
    //map
    //switch-case
    for(int i=0;i<s.length();++i){
        switch(s[i]) {
        case 122 :
            answer+='0';
            i+=3;
            break;
        
        case 111 :
            answer+='1';
            i+=2;
            break;            
        
        case 116 :
            if(s[i+1]=='w'){
                answer+='2';
                i+=2;
                break;
            }
            else{
                answer+='3';
                i+=4;
                break;   
            }
        
        case 102 :
            if(s[i+1]=='o'){
                answer+='4';
                i+=3;
                break;   
            }
            else{
                answer+='5';
                i+=3;
                break;   
            }
    
        case 115:
            if(s[i+1]=='i'){
                answer+='6';
                i+=2;
                break;   
            }
            else{
                answer+='7';
                i+=4;
                break;   
            }
        
        case 101 : 
            answer+='8';
            i+=4;
            break;            
        
        case 110 : 
            answer+='9';
            i+=3;
            break;            
        
        
        default :
            answer+=s[i];
        }
    }
    return stoi(answer);
}