#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    pair<int, int> collumMinMax{ -1,-1 };
    pair<int, int> rowMinMax{ -1,-1 };
    for (int raw = 0; raw < wallpaper.size(); ++raw) {
        for (int col = 0; col < wallpaper[raw].length(); ++col) {
            if (wallpaper[raw][col] == '#') {
                if (collumMinMax.first<0) {
                    collumMinMax.first = col;
                    collumMinMax.second = col;
                }
                else {
                    collumMinMax.first = min(collumMinMax.first, col);
                    collumMinMax.second = max(collumMinMax.second, col);
                }

                if (rowMinMax.first<0) {
                    rowMinMax.first = raw;
                    rowMinMax.second = raw;
                }
                else {
                    rowMinMax.second = raw;
                }
            }
        }
    }
    answer.push_back(rowMinMax.first);
    answer.push_back(collumMinMax.first);
    answer.push_back(rowMinMax.second+1);
    answer.push_back(collumMinMax.second+1);
    return answer;
}