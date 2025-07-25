#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    map<string, int> nameMap;
    map<int, string> NumMap;
    for (int i = 0; i < players.size(); ++i) {
        nameMap[players[i]] = (i);
        NumMap[i] = players[i];
    }

    int TempNum;
    string TempName;
    for (int i = 0; i < callings.size(); ++i) {
        TempNum = nameMap[callings[i]]; //원래 i등 등수
        TempName = NumMap[TempNum];     //원래 i등 이름

        nameMap[callings[i]] = nameMap[NumMap[TempNum - 1]];
        NumMap[TempNum] = NumMap[TempNum - 1];
        NumMap[TempNum - 1] = TempName;
        nameMap[NumMap[TempNum]] = TempNum;
    }

    vector<string> answer;
    for (int i = 0; i < players.size(); ++i)
    {
        answer.push_back(NumMap[i]);
    }
    return answer;
}