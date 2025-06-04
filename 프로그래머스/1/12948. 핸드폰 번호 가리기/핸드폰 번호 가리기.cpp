#include <string>
#include <vector>
#include <string>

using namespace std;
string solution(string phone_number) {
    string answer (phone_number.length()-4,'*');
    answer+=phone_number.substr(phone_number.length()-4);


/*
    for(int i=0; i<phone_number.length(); ++i){
        (i>phone_number.length()-5 ? answer+=phone_number[i] : answer+="*");
    }
*/
return answer;
}