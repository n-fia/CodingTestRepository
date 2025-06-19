#include <string>
#include <vector>
#include <algorithm> //reverse

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string temp = "";
    //
    for(int i=1; i<food.size();++i){
        if(food[i]/2>0){
            for(int j=0; j< food[i]/2;++j){
                temp+=to_string(i);
            }
        }
    }
    answer=temp+"0";
    reverse(temp.begin(),temp.end());
    return answer+temp;
}