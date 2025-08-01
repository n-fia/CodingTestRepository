#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer(2);
    int row = 0;
    int col = 0;

    for (int i = 0; i < park.size(); ++i) {
        if (park[i].find('S')!=-1) {
            row = i;
            col = park[i].find('S');
            break;
        }
    }

    for (int i = 0; i < routes.size(); ++i) {
        switch (routes[i][0]) {
        case 69://E
            if (park[0].size() - 1 >= col + routes[i][2] - 48) {
                int temp = 0;
                for (int j = 0; j < routes[i][2] - 48; ++j) {
                    if (park[row][col + temp+1] != 'X') {
                        ++temp;
                    }
                    else {
                        temp=0;
                        break;
                    }
                }
                col += temp;
            }
            break;
        case 83://S
            if (park.size() - 1 >= row + routes[i][2] - 48) {
                int temp = 0;
                for (int j = 0; j < routes[i][2] - 48; ++j) {
                    if (park[row+temp+1][col] != 'X') {
                        ++temp;
                    }
                    else {
                        temp=0;
                        break;
                    }
                }
                row += temp;
            }
            break;
        case 87://W
            if (0 <= col - routes[i][2] + 48) {
                int temp = 0;
                for (int j = 0; j < routes[i][2] - 48; ++j) {
                    if (park[row][col - temp-1] != 'X') {
                        ++temp;
                    }
                    else {
                        temp=0;
                        break;
                    }
                }
                col -= temp;
            }
            break;
        case 78://N
            if (0 <= row - routes[i][2] + 48) {
                int temp = 0;
                for (int j = 0; j < routes[i][2] - 48; ++j) {
                    if (park[row - temp-1][col] != 'X') {
                        ++temp;
                    }
                    else {
                        temp=0;
                        break;
                    }
                }
                row -= temp;
            }
            break;
        }
    }
    answer[0] = row;
    answer[1] = col;
    return answer;
}