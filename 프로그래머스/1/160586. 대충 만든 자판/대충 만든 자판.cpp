#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer(targets.size());
    for (int i = 0; i < targets.size(); ++i) {
        for (int j = 0; j < targets[i].length(); ++j) {
            vector<int> temp;
            for (int k = 0; k < keymap.size(); ++k) {
                if (answer[i] == -1) { break; }
                if(keymap[k].find(targets[i][j]) != string::npos) {
                    if (keymap[k].find(targets[i][j]) != 0) {
                        int h = keymap[k].find(targets[i][j]);
                        temp.push_back(keymap[k].find(targets[i][j]));
                    }
                    else {
                        int h = keymap[k].find(targets[i][j]);
                        answer[i]++;
                        break;
                    }
                }
                if (k >= keymap.size() - 1) {
                    if(temp.size()==0){
                        answer[i] = -1; 
                    }
                    else {
                        sort(temp.begin(), temp.end());
                        answer[i] += temp[0] + 1;
                    }
                }
            }
        }
    }
    return answer;
}