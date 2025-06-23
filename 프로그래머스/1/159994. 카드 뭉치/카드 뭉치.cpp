#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int i=0, j=0;
    //goal if cards[i]나 cards[j]가 str과 같어쩌구
    for(string str : goal){
        if(cards1[i]==str){
            ++i;
            continue;
        }
        if(cards2[j]==str){
            ++j;
            continue;
        }
        return "No";
    }
    return "Yes";
}