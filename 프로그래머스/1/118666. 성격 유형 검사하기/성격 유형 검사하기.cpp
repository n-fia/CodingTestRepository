#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    unordered_map<char, int> unMap;
    for (int i = 0; i < choices.size(); ++i) {
        switch (choices[i]) {
        case 1:
            unMap[survey[i][0]]+=3;
            break;
        case 2:
            unMap[survey[i][0]] += 2;
            break;
        case 3:
            ++unMap[survey[i][0]];
            break;
        case 4:
            break;
        case 5:
            ++unMap[survey[i][1]];
            break;
        case 6:
            unMap[survey[i][1]] += 2;
            break;
        case 7:
            unMap[survey[i][1]] += 3;
            break;
        }
    }

    string RCJA = "RCJA";
    string TFMN = "TFMN";

    for (int i = 0; i < 4; ++i) {
        if (unMap[RCJA[i]] > unMap[TFMN[i]])
        {
            answer += RCJA[i];
        }
        else if (unMap[RCJA[i]] < unMap[TFMN[i]]) {
            answer += TFMN[i];
        }
        else {
            if (RCJA[i] > TFMN[i]) answer += TFMN[i];
            else answer += RCJA[i];
        }
    }
    return answer;
}